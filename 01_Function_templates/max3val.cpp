//
// Created by zhaojunhe on 2018/9/26.
//

#include <cstring>
#include <iostream>

template<typename T>
T max(T a, T b) {
    std::cout << "T max(T a, T b)" << std::endl;
    return b < a ? a : b;
}

template<typename T>
T *max(T *a, T *b) {
    std::cout << "T *max(T *a, T *b)" << std::endl;
    return *b < *a ? a : b;
}

char const *max(char const *a, char const *b) {
    std::cout << "char const *max(char const *a, char const *b)" << std::endl;
    return std::strcmp(b, a) < 0 ? a : b;
}

int main() {
    int a = 7;
    int b = 42;

    auto m = ::max(7, 42);

    std::string s1 = "hey";
    std::string s2 = "you";
    auto m2 = ::max(s1, s2);

    int *p1 = &b;
    int *p2 = &a;
    auto m3 = ::max(p1, p2);

    char const *x = "hello";
    char const *y = "world";
    auto m4 = ::max(x, y);
}