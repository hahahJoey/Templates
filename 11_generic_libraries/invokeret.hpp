//
// Created by zhaojunhe on 2018/10/9.
//
#pragma once

#include <utility>
#include <functional>
#include <type_traits>

template<typename Callable, typename... Args>
decltype(auto) call(Callable &&op, Args &&... args) {
    if constexpr (std::is_same_v<typename std::__invoke_return <Callable, Args...>::type, void>) {
        std::invoke(std::forward<Callable>(op), std::forward<Args>(args)...);
    } else {
        decltype(auto) ret{std::invoke(std::forward<Callable>(op), std::forward<Args>(args)...)};
        return ret;
    }
};