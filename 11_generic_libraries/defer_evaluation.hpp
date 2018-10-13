//
// Created by zhaojunhe on 2018/10/9.
//
#pragma once

template<typename T>
class Cont {
private:
    T *elems;

public:
    template<typename D = T>
    typename std::conditional<std::is_move_constructible<D>::value, D &&, D &>::type
    foo() {}
};
