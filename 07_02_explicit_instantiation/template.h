#pragma once

template<typename T>
T fibonacci(T val)
{
    if (val < 2)
    {
        return val;
    }
    return fibonacci(val-1) + fibonacci(val - 2);
}
