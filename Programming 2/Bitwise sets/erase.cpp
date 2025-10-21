#include "bitwise_operations.h"

void to_dec(char* bits, int* ciag_dec, int idx, int counter);

void erase_int(char* bits, int* wynik, int idx)
{
    int poz = 0;

    if(*(bits + idx) == ' ')
    {
        idx++;
        erase_int(bits, wynik, idx);
    }
    else
    {
        if((*(bits + idx) == '1') || (*(bits + idx) == '0'))
        {
            to_dec(bits, &poz, idx, 4);

            *wynik = (*wynik & ~(1 << poz));

            idx += 5;
            erase_int(bits, wynik, idx);

        }
        else
            return;
    }
}

void Erase(char* bity, int* zbior)
{
    erase_int(bity, zbior, 0);
}
