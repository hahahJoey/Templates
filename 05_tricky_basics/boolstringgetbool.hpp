//
// Created by zhaojunhe on 2018/10/4.
//
#pragma once

#include "boolstring.hpp"

template<>
inline bool BoolString::get<bool>() const {
    return (value == "true" || value == "1" || value == "on");
}
