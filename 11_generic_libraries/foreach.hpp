//
// Created by zhaojunhe on 2018/10/9.
//
#pragma once

template<typename Iter, typename Callable>
void foreach(Iter current, Iter end, Callable op) {
    while (current != end) {
        op(*current);
        ++current;
    }
};
