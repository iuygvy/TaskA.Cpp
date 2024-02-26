//Bartosz Bugajski
#include "bitwise_operations.h"

int Power(int, int);

void IntToBinary(int x, char* seq, int i, int pow)
{
    if(pow == -1)
    {
        return;
    }
    if(x >= Power(pow, 2))
    {
        *(seq+i) = '1';
        x -= Power(pow, 2);
    }
    else
    {
        *(seq+i) = '0';
    }
    IntToBinary(x, seq, ++i, --pow);
}

void IntToSeq(int set, int bit, char* seq, int i)
{
    if(set == 0)
    {
        return;
    }
    if(Power(bit, 2) <= set && (bit != 31 || set < 0))
    {
        IntToBinary(bit, seq, i, 4);
        set -= Power(bit, 2);
        i += 5;
        if(set == 0)
        {
            *(seq+i) = '\0';
        }
        else
        {
            *(seq+i) = ' ';
        }
        i++;
    }
    IntToSeq(set, --bit, seq, i);
}

void Print(int set, char* seq)
{
    if(set == 0)
    {
        *seq = 'e';
        *(seq+1) = 'm';
        *(seq+2) = 'p';
        *(seq+3) = 't';
        *(seq+4) = 'y';
        *(seq+5) = '\0';
        return;
    }
    int i = 0;
    IntToSeq(set, 31, seq, i);
}