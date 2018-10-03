//
// Created by zhaojunhe on 2018/9/27.
//
#include <iostream>
#include "stack1.hpp"

int main() {
    Stack<int> intStack;
    Stack<std::string> stringStack;

    intStack.push(7);
    std::cout << intStack.top() << "\n";

    stringStack.push("hello");
    std::cout << stringStack.top() << "\n";
    stringStack.pop();
}

