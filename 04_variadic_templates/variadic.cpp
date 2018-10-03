//
// Created by zhaojunhe on 2018/10/3.
//
#include <complex>
#include <vector>
#include <array>
#include <unordered_set>
#include "variadic.hpp"

int main() {
    printDoubled(7.5, std::string("hello"), std::complex<float>(4, 2));

    addOne(1, 2.4, 3.6f);

    std::cout << isHomogeneous(43, -1, "hello") << "\n";
    std::cout << isHomogeneous("hello", "", "world", "!") << "\n";

    std::vector<std::string> coll = {"good", "times", "say", "bye"};
    printElems(coll, 2, 0, 3);
    printIdx<2, 0, 3>(coll);

    std::array<std::string, 5> arr = {"Hello", "my", "new", "!", "World"};
    printByIdx(arr, Indices<0, 4, 3>());

    auto t = std::make_tuple(12, "monkeys", 2.0);
    printByIdx(t, Indices<0, 1, 2>());

    using CustomerOP = Overloader<CustomerEq, CustomerHash>;

    std::unordered_set<Customer, CustomerHash, CustomerEq> coll1;
    std::unordered_set<Customer, CustomerOP, CustomerOP> coll2;
}
