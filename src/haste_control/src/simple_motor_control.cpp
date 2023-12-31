#include <linux/i2c-dev.h>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int16.hpp"
//#include "std_msgs/msg/string.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
#include <functional>
#include <string>

#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <fcntl.h>

using std::placeholders::_1;

struct type4_params{

std::string name={};
int         wheel_type={};
int         radius={};
};



class Simple_motor_control : public rclcpp::Node
{
  public:
    Simple_motor_control(const std::string &name)       //constructor variable
    : Node(name)                              //initiate node name with the variable name
    {
      //declaring parameters sent from outside
      
     /*
      subscription_ = this->create_subscription<std_msgs::msg::Int16>(
        "topic_node_manager", 10,std::bind(&Simple_motor_control::node_manager_callback,this, _1));
    */
      subscription_ = this->create_subscription<std_msgs::msg::Int16>(
        "topic_Smc", 10,std::bind(&Simple_motor_control::smc_callback,this, _1));
    
      pub_motor1_ = this->create_publisher<std_msgs::msg::Int16>("topic_Motor_Left", 10);
      pub_motor2_ = this->create_publisher<std_msgs::msg::Int16>("topic_Motor_Right", 10);
    }

  private:

    //Params list
    std::string name_;
    std::string sensor_name_;
    int on_percentage_;

    //process received data
    void smc_callback(const std_msgs::msg::Int16 & msg)
    {
      uint16_t state=msg.data;
      int left_motor;
      int right_motor;

      switch (state)
      {
        case 0 :    //STOP 
          
          left_motor=0;
          right_motor=0;
          
          break;
        
        case 1 :    //GO 
          
          left_motor=75;
          right_motor=75;


          break;

        case 2 :    //LEFT 
          
          left_motor=-75;
          right_motor=75;

          break;

        case 3 :    //RIGHT 
          
          left_motor=75;
          right_motor=-75;
          
          break;
        
        default:
          break;
      }


      //Send Left Motor commands
      auto message = std_msgs::msg::Int16();

      message.data=left_motor;
      
      pub_motor1_->publish(message);
      
      //Send Right Motor command
      message.data=right_motor;
      
      pub_motor2_->publish(message);
    
    }
    
    /*
    void node_manager_callback(const std_msgs::msg::Int16 & msg)
    {
      //when a new motor is connected a new publisher is created
  
    }
    */
    rclcpp::Subscription<std_msgs::msg::Int16>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Int16>::SharedPtr pub_motor1_;
    rclcpp::Publisher<std_msgs::msg::Int16>::SharedPtr pub_motor2_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Simple_motor_control>("Simple_motor_control"));
  rclcpp::shutdown();
  return 0;
}