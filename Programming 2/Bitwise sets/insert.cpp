#include "bitwise_operations.h"

void to_dec(char* bits, int* ciag_dec, int idx, int counter)
{
    if(counter >= 0)
    {
        if(*(bits + idx) == '1')
            *ciag_dec += (1 << counter);

        to_dec(bits, ciag_dec, ++idx, --counter);
    }
}

void build_int(char* bits, int* zbior_wynik, int idx)
{
    int poz = 0;

    if(*(bits + idx) == ' ')
    {
        build_int(bits, zbior_wynik, ++idx);
    }
    else
    {
        if((*(bits + idx) == '1') || (*(bits + idx) == '0'))
        {
            to_dec(bits, &poz, idx, 4);

            *zbior_wynik = (*zbior_wynik | (1 << poz));

            idx += 5;
            build_int(bits, zbior_wynik, idx);
        }
        else
            return;
    }
}

void Insert(char* bity, int* zbior)
{
    build_int(bity, zbior, 0);
}
