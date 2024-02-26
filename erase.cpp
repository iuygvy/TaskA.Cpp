//Bartosz Bugajski
#include "bitwise_operations.h"

void Erase(char* seq, int* set)
{
    int x = 0;
    Insert(seq, &x);
    *set = *set & ~x;
}