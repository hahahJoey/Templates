//
// Created by zhaojunhe on 2018/9/29.
//
#include <deque>
#include <iostream>
#include "stack3.hpp"

int main() {
    Stack<int> intStack;
    Stack<double, std::deque<double>> dblStack;

    intStack.push(7);
    std::cout << intStack.top() << "\n";

    dblStack.push(42.42);
    std::cout << dblStack.top() << "\n";
    dblStack.pop();
}


