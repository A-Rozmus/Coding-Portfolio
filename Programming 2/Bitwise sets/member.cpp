#include "bitwise_operations.h"

void ignore_space(char* bits, int i, int* idx_wynik)
{
    if(*(bits + i) == ' ')
    {
        *(idx_wynik) += 1;
        ignore_space(bits, ++i, idx_wynik);
    }
}

void to_dec(char* bits, int* ciag_dec, int idx, int counter);

bool Member(char* bity, int zbior)
{
    int idx_member = 0, ciag_member = 0;

    ignore_space(bity, 0, &idx_member);

    to_dec(bity, &ciag_member, idx_member, 4);

    if(((1 << ciag_member) & zbior) != 0)
        return true;
    else
        return false;
}
