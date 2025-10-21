#include "bitwise_operations.h"

void to_bin(int dec_num, char* bits, int idx)
{
    *(bits + idx + 4) = (char)((dec_num % 2) + '0');
    dec_num /= 2;
    *(bits + idx + 3) = (char)((dec_num % 2) + '0');
    dec_num /= 2;
    *(bits + idx + 2) = (char)((dec_num % 2) + '0');
    dec_num /= 2;
    *(bits + idx + 1) = (char)((dec_num % 2) + '0');
    dec_num /= 2;
    *(bits + idx) = (char)((dec_num % 2) + '0');

    *(bits + idx + 5) = ' ';
}

void print_int(int dany_zbior, char* bits, int poz, int idx)
{
    if(poz >= 0)
    {
        if ((dany_zbior & (1 << poz)) != 0)
        {
            to_bin(poz, bits, idx);
            idx += 6;
        }

        print_int(dany_zbior, bits, --poz, idx);
    }
    else
        *(bits + idx - 1) = '\0';
}

void Print(int zbior, char* bity)
{
    if(zbior != 0)
        print_int(zbior, bity, 31, 0);
    else
    {
        *(bity) = 'e';
        *(bity + 1) = 'm';
        *(bity + 2) = 'p';
        *(bity + 3) = 't';
        *(bity + 4) = 'y';
        *(bity + 5) = '\0';
    }
}
