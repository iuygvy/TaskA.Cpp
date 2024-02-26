#include "bitwise_operations.h"

int main() {
    char seq[] = "00000 00001";
    int x = 1;
    Emplace(seq, &x);
    std::cout << x << '\n';
    char seq2[1000];
    Print(-1, seq2);
    std::cout << seq2 << '\n';
    std::cout << Cardinality(0) << '\n';
    return 0;
}