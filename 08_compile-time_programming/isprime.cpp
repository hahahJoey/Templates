//
// Created by zhaojunhe on 2018/10/6.
//

#include <iostream>
#include <vector>
#include "isprime.hpp"
#include "isprime11.hpp"
//#include "isprime14.hpp"
#include "print.hpp"

#include "len.hpp"

int main() {
    constexpr bool is_prime = IsPrime<11>::value;
    constexpr bool is_prime11 = isPrime(9);
    std::cout << is_prime << "\n";
    std::cout << is_prime11 << "\n";

    int a[10];
    std::cout << len(a) << "\n";
    std::cout << len("tmp") << "\n";

    std::vector<int> v;
    std::cout << len(v) << "\n";

    int *p;
    std::cout << len(p) << "\n";

    std::allocator<int> x;
    std::cout << len(x) << "\n";

    print(1.2, "hello", 5.6f);
}
