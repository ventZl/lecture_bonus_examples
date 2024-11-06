#include <iostream>
#include "variadic.h"

int main(int, char **)
{
    std::cout << "Sum of numbers 2, 3, 5, 8 and 10 is " << sum(2, 3, 5, 8, 10) << std::endl;
    return 0;
}
