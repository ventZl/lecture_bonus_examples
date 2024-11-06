#include "template.h"

int main(int, char **)
{
    Array<char, 1> array;
    (void) array;
    Array<char, 0> bad_array;
    (void) bad_array;
    return 0;
}
