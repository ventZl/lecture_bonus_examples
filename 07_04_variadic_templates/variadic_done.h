#pragma once

int sum() {
    return 0;
}

template <typename T, typename... Args>
T sum(T first, Args... args)
{
    return first + sum(args...);
}
