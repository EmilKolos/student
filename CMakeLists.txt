cmake_minimum_required(VERSION 3.5)

project(StudentDatabase LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(Student/Student)

add_executable(StudentDatabase main.cpp)

target_link_libraries(StudentDatabase PUBLIC Student)
