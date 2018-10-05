//
// Created by zhaojunhe on 2018/10/5.
//

#include "specialmemtmpl3.hpp"

int main() {
    std::string s = "sname";
    Person p1(s);
    Person p2("tmp");

    Person p3(p1);
    Person p4(std::move(p1));
}