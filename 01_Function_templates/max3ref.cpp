#include <cstring>
#include <iostream>

//
// Created by zhaojunhe on 2018/9/26.
//
template<typename T>
T const &max(T const &a, T const &b) {
    std::cout << "T const &max(T const &a, T const &b)" << std::endl;
    return b < a ? a : b;
}

char const *max(char const *a, char const *b) {
    std::cout << "char const *max(char const *a, char const *b)" << std::endl;
    return std::strcmp(b, a) < 0 ? a : b;
}

template<typename T>
T const &max(T const &a, T const &b, T const &c) {
    std::cout << "T const &max(T const &a, T const &b, T const &c)" << std::endl;
    return max(max(a, b), c);
}

int main() {
    auto m1 = ::max(7, 42, 68);

    char const *s1 = "frederic";
    char const *s2 = "anica";
    char const *s3 = "lucas";

    auto m2 = ::max(s1, s2, s3); //run-time ERROR
    std::cout << m2 << std::endl;
}