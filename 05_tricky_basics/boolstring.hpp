//
// Created by zhaojunhe on 2018/10/4.
//
#pragma once

#include <string>

class BoolString {
private:
    std::string value;
public:
    BoolString(std::string const &s) : value(s) {}

    template<typename T = std::string>
    T get() const {
        return value;
    }
};
