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
add_executable(stackauto 03_nontype_template_parameters/stackauto.cpp)
add_executable(varprint2 04_variadic_templates/varprint2.cpp 04_variadic_templates/addspace.hpp)
add_executable(foldtraverse 04_variadic_templates/foldtraverse.cpp)
add_executable(variadic 04_variadic_templates/variadic.cpp)

add_executable(arrays 05_tricky_basics/arrays.cpp)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-elide-constructors") not work
#g++ right_value.cpp -fno-elide-constructors -o out
add_executable(right_value 05_tricky_basics/right_value.cpp)

add_executable(member_templates
        05_tricky_basics/member_templates.cpp
        05_tricky_basics/stack5decl.hpp
        05_tricky_basics/stack5assign.hpp
        05_tricky_basics/stack6decl.hpp
        05_tricky_basics/stack6assign.hpp
        05_tricky_basics/stack7decl.hpp
        05_tricky_basics/stack7assign.hpp
        05_tricky_basics/boolstring.hpp
        05_tricky_basics/boolstringgetbool.hpp
        )

add_executable(variable_templates
        05_tricky_basics/variable_templates.cpp)

add_executable(stack9 05_tricky_basics/stack9.cpp)