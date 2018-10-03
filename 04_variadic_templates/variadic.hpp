//
// Created by zhaojunhe on 2018/10/3.
//
#pragma once

#include "varprint2.hpp"

// variadic expression
template<typename... T>
void printDoubled(T const &... args) {
    print(args + args...);
}

template<typename... T>
void addOne(T const &... args) {
    print(args + 1 ...);
}

template<typename T1, typename... TN>
constexpr bool isHomogeneous(T1, TN...) {
    return (std::is_same<T1, TN>::value && ...);
};

// variadic indices
template<typename C, typename... Idx>
void printElems(C const &coll, Idx... idx) {
    print(coll[idx]...);
};

template<std::size_t... Idx, typename C>
void printIdx(C const &coll) {
    print(coll[Idx]...);
};

// variadic class templates
template<std::size_t...>
struct Indices {
};

template<typename T, std::size_t... Idx>
void printByIdx(T t, Indices<Idx...>) {
    print(std::get<Idx>(t)...);
};

// variadic deduction guides
namespace myns {

//template<typename T, typename... U> array(T, U
//...) -> array<std::enable_if_t<(std::is_same_v<T, U> && ...>), T>, (1+sizeof...(U))>;

} // namespace myns

// variadic base classes

class Customer {
private:
    std::string name;
public:
    Customer(std::string const &n) : name(n) {}

    std::string getName() const { return name; }
};

struct CustomerEq {
    bool operator()(Customer const &c1, Customer const &c2) const {
        return c1.getName() == c2.getName();
    }
};

struct CustomerHash {
    std::size_t operator()(Customer const &c) const {
        return std::hash<std::string>()(c.getName());
    }
};

template<typename... Bases>
struct Overloader : Bases ... {
    using Bases::operator()...;
};




















