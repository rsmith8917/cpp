cmake_minimum_required(VERSION 3.28.3)

# Project Name
project(cpp)

add_executable(${PROJECT_NAME} main.cpp)

# Install binary with "sudo make install"
# install(TARGETS cpp DESTINATION bin)