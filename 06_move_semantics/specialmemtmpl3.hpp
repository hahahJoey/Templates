//
// Created by zhaojunhe on 2018/10/5.
//
#pragma once

#include <string>
#include <iostream>

template<typename T>
using EnableIfString = std::enable_if_t<std::is_convertible_v<T, std::string>>;

class Person {
private:
    std::string name;
public:
    template<typename STR, typename = EnableIfString<STR>>
    explicit Person(STR &&n):name(std::forward<STR>(n)) {
        std::cout << " TMPL-CONSTR for '" << name << "'\n";
    }

    Person(Person const &p) : name(p.name) {
        std::cout << "COPY-CONSTR Person '" << name << "'\n";
    }

    Person(Person &&p) : name(std::move(p.name)) {
        std::cout << "MOVE-CONSTR Person '" << name << "'\n";
    }
};
