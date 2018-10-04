//
// Created by zhaojunhe on 2018/10/4.
//

//#include "stack5assign.hpp"
//#include "stack6assign.hpp"
#include "stack7assign.hpp"
#include <string>
#include <iostream>

#include "boolstringgetbool.hpp"

int main() {
    Stack<int> intStack;
    Stack<float> floatStack;
    Stack<std::string> stringStack;

    floatStack = intStack;
//    floatStack = stringStack;

    std::cout << std::boolalpha;
    BoolString s1("hello");
    std::cout << s1.get() << "\n";
    std::cout << s1.get<bool>() << "\n";
    BoolString s2("on");
    std::cout << s2.get<bool>() << "\n";
}

