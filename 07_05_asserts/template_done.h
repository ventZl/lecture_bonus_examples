#pragma once

template<typename T, int N>
class Array {
    static_assert(N > 0, "Array size must be positive non-zero");
};
