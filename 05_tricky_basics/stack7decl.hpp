//
// Created by zhaojunhe on 2018/10/4.
//

#pragma once

#include <deque>
#include <cassert>

template<typename T, typename Cont = std::deque<T>>
class Stack {
private:
    Cont elems;
public:
    void push(T const &elem);

    void pop();

    T const &top() const;

    bool empty() const {
        return elems.empty();
    }

    template<typename T2, typename Cont2>
    Stack &operator=(Stack<T2, Cont2> const &);

    template<typename, typename> friend
    class Stack;
};

template<typename T, typename Cont>
void Stack<T, Cont>::push(T const &elem) {
    elems.push_back(elem);
}

template<typename T, typename Cont>
void Stack<T, Cont>::pop() {
    assert(!elems.empty());
    elems.pop_back();
}

template<typename T, typename Cont>
T const &Stack<T, Cont>::top() const {
    assert(!elems.empty());
    return elems.back();
}
