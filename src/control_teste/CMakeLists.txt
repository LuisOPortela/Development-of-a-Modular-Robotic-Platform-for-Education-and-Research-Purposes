cmake_minimum_required(VERSION 3.8)
project(control_teste)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(teste1 src/teste1.cpp)
ament_target_dependencies(teste1 rclcpp std_msgs)

target_include_directories(teste1 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_features(teste1 PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS 
teste1
  DESTINATION lib/${PROJECT_NAME})

ament_package()
