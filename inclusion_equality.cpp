//Bartosz Bugajski
#include "bitwise_operations.h"

bool Inclusion(int set1, int set2)
{
    return (set1&set2) == set1;
}

bool Equality(int set1, int set2)
{
    return set1 == set2;
}