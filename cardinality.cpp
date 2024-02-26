//Bartosz Bugajski
#include "bitwise_operations.h"

int Power(int, int);

int Count(int set, int bit, int i)
{
    if(set == 0)
    {
        return i;
    }
    if(Power(bit, 2) <= set && (bit != 31 || set < 0))
    {
        set -= Power(bit, 2);
        i++;
    }
    Count(set, --bit, i);
}

int Cardinality(int set)
{
    return Count(set, 31, 0);
}