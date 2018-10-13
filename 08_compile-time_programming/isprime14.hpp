//
// Created by zhaojunhe on 2018/10/6.
//
#pragma once

constexpr bool isPrime(unsigned p) {
    for (int d = 2; d < p / 2; ++d) {
        if (p % d == 0)
            return false;
    }

    return p > 1;
}
