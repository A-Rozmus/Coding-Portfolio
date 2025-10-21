#include "bitwise_operations.h"

bool Inclusion(int zbior1, int zbior2)
{
    if((zbior1 & zbior2) == zbior1)
        return true;
    else
        return false;
}

bool Equality(int zbior1, int zbior2)
{
    if(zbior1 == zbior2)
        return true;
    else
        return false;
}
