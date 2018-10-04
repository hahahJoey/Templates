//
// Created by zhaojunhe on 2018/10/4.
//
#include "stack5decl.hpp"

template<typename T>
template<typename T2>
Stack<T> &Stack<T>::operator=(Stack<T2> const &op2) {
    Stack<T2> tmp(op2);

    elems.clear();
    while (!elems.empty()) {
        elems.push_front(tmp.top());
        tmp.pop();
    }

    return *this;
}
