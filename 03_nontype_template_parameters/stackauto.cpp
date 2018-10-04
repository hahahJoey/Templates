//
// Created by zhaojunhe on 2018/10/4.
//

#include "stackauto.hpp"
#include <string>
#include <iostream>

int main() {
    Stack<int, 20u> int20uStack;
    Stack<std::string, 40> stringStack;

    int20uStack.push(7);
    std::cout << int20uStack.top() << "\n";
    auto size1 = int20uStack.size();

    stringStack.push("hello");
    std::cout << stringStack.top() << "\n";
    auto size2 = stringStack.size();

    if (!std::is_same_v<decltype(size1), decltype(size2)>)
        std::cout << "size types differ" << "\n";
}
