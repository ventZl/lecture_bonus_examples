#pragma once

template <int N>
constexpr long fibonacci() {
    return fibonacci<N - 1>() + fibonacci<N - 2>();
}

template <>
constexpr long fibonacci<0>() { return 0; }

template <>
constexpr long fibonacci<1>() { return 1; }
