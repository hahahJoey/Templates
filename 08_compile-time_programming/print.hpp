//
// Created by zhaojunhe on 2018/10/6.
//
#pragma once

#include <iostream>

template<typename T, typename... Types>
void print(T const &firstArg, Types const &... args) {
    std::cout << firstArg << "\n";
    if constexpr (sizeof...(args) > 0) {
        print(args...);
    }
};
