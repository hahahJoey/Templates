//
// Created by zhaojunhe on 2018/9/26.
//

#include <iostream>
#include <assert.h>

int max(int a, int b) {
    std::cout << "int max(int a, int b)" << std::endl;
    return b < a ? a : b;
}

template<typename T>
T max(T a, T b) {
    std::cout << "T max(T a, T b)" << std::endl;
    return b < a ? a : b;
}

int main() {
    assert(true);
    ::max(7, 42);
    ::max('a', 42.7);
}

