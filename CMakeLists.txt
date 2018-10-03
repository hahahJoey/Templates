cmake_minimum_required(VERSION 3.9)
project(templates)

set(CMAKE_CXX_STANDARD 17)

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

add_executable(stack1test
        02_class_templates/stack1.hpp
        02_class_templates/stack2.hpp
        02_class_templates/stackpartspec.hpp
        02_class_templates/stack1test.cpp)

add_executable(stack3 02_class_templates/stack3.cpp)
add_executable(stacknotype 03_nontype_template_parameters/stacknotype.cpp)
add_executable(varprint2 04_variadic_templates/varprint2.cpp 04_variadic_templates/addspace.hpp)
add_executable(foldtraverse 04_variadic_templates/foldtraverse.cpp)
add_executable(variadic 04_variadic_templates/variadic.cpp)