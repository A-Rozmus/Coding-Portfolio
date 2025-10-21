#include "bitwise_operations.h"

bool LessThen(int zbior1, int zbior2)
{
    if(Cardinality(zbior1) < Cardinality(zbior2))
        return true;
    else
    {
        if(Cardinality(zbior1) > Cardinality(zbior2))
            return false;
        else
        {
            if((unsigned)zbior1 < (unsigned)zbior2)
                return true;
            else
                return false;
        }
    }
}

bool LessEqual(int zbior1, int zbior2)
{
    if(Cardinality(zbior1) < Cardinality(zbior2))
        return true;
    else
    {
        if(Cardinality(zbior1) > Cardinality(zbior2))
            return false;
        else
        {
            if((unsigned)zbior1 < (unsigned)zbior2)
                return true;
            else
            {
                if((unsigned)zbior1 > (unsigned)zbior2)
                    return false;
                else
                    return true;
            }
        }
    }
}

bool GreatEqual(int zbior1, int zbior2)
{
    if(Cardinality(zbior1) > Cardinality(zbior2))
        return true;
    else
    {
        if(Cardinality(zbior1) < Cardinality(zbior2))
            return false;
        else
        {
            if((unsigned)zbior1 > (unsigned)zbior2)
                return true;
            else
            {
                if((unsigned)zbior1 < (unsigned)zbior2)
                    return false;
                else
                    return true;
            }
        }
    }
}

bool GreatThen(int zbior1, int zbior2)
{
    if(Cardinality(zbior1) > Cardinality(zbior2))
        return true;
    else
    {
       if(Cardinality(zbior1) < Cardinality(zbior2))
            return false;
        else
        {
            if((unsigned)zbior1 > (unsigned)zbior2)
                return true;
            else
                return false;
        }
    }
}
