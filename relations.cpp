//Bartosz Bugajski
#include "bitwise_operations.h"

bool LessThen(int set1, int set2)
{
    int card1 = Cardinality(set1);
    int card2 = Cardinality(set2);
    return (card1 < card2) || (card1 == card2 && set1 < set2);
}

bool LessEqual(int set1, int set2)
{
    int card1 = Cardinality(set1);
    int card2 = Cardinality(set2);
    return (card1 < card2) || (card1 == card2 && set1 <= set2);
}

bool GreatEqual(int set1, int set2)
{
    return LessEqual(set2, set1);
}

bool GreatThen(int set1, int set2)
{
    return LessThen(set2, set1);
}