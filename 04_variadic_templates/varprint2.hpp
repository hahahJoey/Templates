#include <iostream>

//
// Created by zhaojunhe on 2018/9/30.
//
template<typename T>
void print(T arg) {
    std::cout << arg << "\n";
}

template<typename T, typename... Types>
void print(T firstArg, Types... args) {
    print(firstArg);
//    std::cout << sizeof...(args) << "\n";
    print(args...);
};
