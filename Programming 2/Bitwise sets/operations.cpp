#include "bitwise_operations.h"

void Union(int zbior1, int zbior2, int* zbior_wynik)
{
    *zbior_wynik = (zbior1 | zbior2);
}

void Intersection(int zbior1, int zbior2, int* zbior_wynik)
{
    *zbior_wynik = (zbior1 & zbior2);
}

void Difference(int zbior1, int zbior2, int* zbior_wynik)
{
    *zbior_wynik = (zbior1 & ~zbior2);
}

void Symmetric(int zbior1, int zbior2, int* zbior_wynik)
{
    Difference((zbior1 | zbior2), (zbior1 & zbior2), zbior_wynik);
}

void Complement(int zbior, int* zbior_wynik)
{
    *zbior_wynik = (~zbior);
}
