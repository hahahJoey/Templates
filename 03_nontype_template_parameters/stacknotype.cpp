//
// Created by zhaojunhe on 2018/9/30.
//

#include <iostream>
#include "stacknotype.hpp"

int main() {
    Stack<int, 20> int20Stack;
    Stack<int, 40> int40Stack;
    Stack<std::string, 40> stringStack;

    int20Stack.push(7);
    std::cout << int20Stack.top() << "\n";
    int20Stack.pop();

    stringStack.push("hello");
    std::cout << stringStack.top() << "\n";
    stringStack.pop();
}
