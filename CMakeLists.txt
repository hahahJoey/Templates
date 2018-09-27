cmake_minimum_required(VERSION 3.9)
project(templates)

set(CMAKE_CXX_STANDARD 14)

add_executable(function_template_max1
        01_Function_templates/max1.cpp
        01_Function_templates/max1.hpp
        01_Function_templates/maxauto.hpp
        01_Function_templates/maxdecltypedecay.hpp
        01_Function_templates/maxcommon.hpp)
add_executable(function_template_max2
        01_Function_templates/max2.cpp)
add_executable(function_template_max3val
        01_Function_templates/max3val.cpp)
add_executable(function_template_max3ref
        01_Function_templates/max3ref.cpp)
add_executable(function_template_max4
        01_Function_templates/max4.cpp)