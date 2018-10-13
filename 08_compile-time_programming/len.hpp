//
// Created by zhaojunhe on 2018/10/6.
//

#pragma once

#include <cstddef>

template<typename T, unsigned N>
std::size_t len(T(&)[N]) {
    std::cout << "len() for array matches.\n";
    return N;
};

//template<typename T>
//typename T::size_type len(T const &t) {
//    std::cout << "len() for a type wiht size_type matches.\n";
//
//    return t.size();
//}

template<typename T>
auto len(T const &t) -> decltype((void) (t.size()), typename T::size_type()) {
    std::cout << "len() for a type wiht size_type matches.\n";
    return t.size();
}

std::size_t len(...) {
    std::cout << "Only the fallback len() matches.\n";

    return 0;
}
