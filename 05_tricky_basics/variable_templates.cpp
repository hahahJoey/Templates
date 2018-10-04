//
// Created by zhaojunhe on 2018/10/4.
//
#include <array>
#include <iostream>

template<int N>
std::array<int, N> arr{};

template<auto N>
constexpr decltype(N) dval = N;

int main() {
    std::cout << dval<'c'> << "\n";

    arr<10>[0] = 42;

    for (int i = 0; i < arr<10>.size(); ++i) {
        std::cout << arr<10>[i] << "\n";
    }
}

