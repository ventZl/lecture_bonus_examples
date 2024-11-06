#include <iostream>
#include "compile_time.h"

int main(int, char **)
{
    std::cout << "Fibonacci of 20 is " << fibonacci<20>() << std::endl;
    return 0;
}
