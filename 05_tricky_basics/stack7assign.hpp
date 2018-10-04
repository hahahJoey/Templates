//
// Created by zhaojunhe on 2018/10/4.
//
#pragma once

#include "stack7decl.hpp"

template<typename T, typename Cont>
template<typename T2, typename Cont2>
Stack<T, Cont> &Stack<T, Cont>::operator=(Stack<T2, Cont2> const &op2) {
    elems.clear();
    elems.insert(elems.begin(), op2.elems.begin(), op2.elems.end());

    return *this;
}
