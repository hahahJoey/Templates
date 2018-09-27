//
// Created by zhaojunhe on 2018/9/21.
//

//#include "max1.hpp"
//#include "maxauto.hpp"
//#include "maxdecltypedecay.hpp"
#include "maxcommon.hpp"
#include <iostream>

int main() {
    int i = 42;
    std::cout << "max(7,i):      " << ::max(7, i) << '\n';
    auto a = ::max(4, 3.5);
    std::cout << typeid(::max(4, .4f)).name() << std::endl;

    double f1 = 3.4;
    double f2 = -6.7;
    std::cout << "max(f1,f2):    " << ::max(f1, f2) << '\n';

    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << "max(s1, s2):    " << ::max(s1, s2) << '\n';
}
