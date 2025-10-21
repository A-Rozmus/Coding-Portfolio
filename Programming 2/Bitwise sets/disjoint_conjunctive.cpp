#include "bitwise_operations.h"

bool Disjoint(int zbior1, int zbior2)
{
    if((zbior1 & zbior2) == 0)
        return true;
    else
        return false;
}

bool Conjunctive(int zbior1, int zbior2)
{
    if((zbior1 & zbior2) != 0)
        return true;
    else
        return false;
}
