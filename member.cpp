//Bartosz Bugajski
#include "bitwise_operations.h"

bool Member(char* seq, int set)
{
    int pom = 0;
    Insert(seq, &pom);
    return Inclusion(pom, set);
}