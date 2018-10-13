//
// Created by zhaojunhe on 2018/10/9.
//

#include <vector>
#include <iostream>
#include "foreach.hpp"

void fun(int i) {
    std::cout << "fun() called for " << i << "\n";
}

class FuncObj {
public:
    void operator()(int i) const {
        std::cout << "FuncObj::op() called for " << i << "\n";
    }
};

int main() {
    std::vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19};

    foreach(primes.begin(), primes.end(), fun);
    foreach(primes.begin(), primes.end(), &fun);
    foreach(primes.begin(), primes.end(), FuncObj());
    foreach(primes.begin(), primes.end(), [](int i) {
        std::cout << "lamda called for " << i << "\n";
    });
}