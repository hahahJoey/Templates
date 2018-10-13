//
// Created by zhaojunhe on 2018/10/9.
//
#pragma once

#include <functional>

template<typename Iter, typename Callable, typename... Args>
void foreach(Iter current, Iter end, Callable op, Args const &... args) {
    while (current != end) {
        std::invoke(op, args..., *current);
        ++current;
    }
};
