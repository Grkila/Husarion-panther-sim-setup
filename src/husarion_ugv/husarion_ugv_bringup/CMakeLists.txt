cmake_minimum_required(VERSION 3.10.2)
project(husarion_ugv_bringup)

find_package(ament_cmake REQUIRED)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

ament_package()
