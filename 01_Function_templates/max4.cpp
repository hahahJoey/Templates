//
// Created by zhaojunhe on 2018/9/26.
//

#include <iostream>

template<typename T>
T max(T a, T b) {
    std::cout << "T max(T a, T b)" << std::endl;
    return b < a ? a : b;
}

template<typename T>
T max(T a, T b, T c) {
    std::cout << "T max(T a, T b, T c)" << std::endl;
    return max(max(a, b), c);
}

int max(int a, int b) {
    return b < a ? a : b;
}

int main() {
    ::max(47, 11, 33); // “uses max<T>() instead of max(int,int)”
}
