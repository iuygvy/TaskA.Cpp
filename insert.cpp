//Bartosz Bugajski
#include "bitwise_operations.h"

int Power(int y, int z)
{
    if(y == 1)
    {
        return z;
    }
    else if(y == 0)
    {
        return 1;
    }
    z = z * 2;
    Power(--y, z);
}

void BinaryToInt(char* seq, int* set, int i, int k, int pom)
{
    if(i == -1)
    {
        return;
    }
    if(*(seq+i) == '1')
    {
        pom += Power(k, 2);
        k++;
    }
    else if(*(seq+i) == '0')
    {
        k++;
    }
    if(k == 5)
    {
        if(!(Power(pom, 2) & *set))
        {
            *set += Power(pom, 2);
        }
        k = 0;
        pom = 0;
    }
    BinaryToInt(seq, set, --i, k, pom);
}

int FindLast(char* seq, int i)
{
    if(*(seq+i) == '\0')
    {
        return i;
    }
    FindLast(seq, ++i);
}

void Insert(char* seq, int* set)
{
    int i = FindLast(seq, 0);
    BinaryToInt(seq, set, i, 0, 0);
}