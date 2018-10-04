//
// Created by zhaojunhe on 2018/10/4.
//

#pragma once

#include <deque>
#include <cassert>

template<typename T>
class Stack {
private:
    std::deque<T> elems;
public:
    void push(T const &elem);

    void pop();

    T const &top() const;

    bool empty() const {
        return elems.empty();
    }

    template<typename T2>
    Stack &operator=(Stack<T2> const &);

    template<typename> friend class Stack;
};

template<typename T>
void Stack<T>::push(T const &elem) {
    elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop() {
    assert(!elems.empty());
    elems.pop_back();
}

template<typename T>
T const &Stack<T>::top() const {
    assert(!elems.empty());
    return elems.back();
}
