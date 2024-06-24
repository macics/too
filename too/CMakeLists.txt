# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# set the project name
project(TodoList)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(TodoList src/main.cpp src/TodoList.cpp)

# include directories
target_include_directories(TodoList PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(TodoList PUBLIC include)
