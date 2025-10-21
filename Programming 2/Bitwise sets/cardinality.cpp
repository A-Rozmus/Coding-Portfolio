#include "bitwise_operations.h"

void zlicz(int i, int counter, int* jedynki)
{
    if(counter >= 0)
    {
        if((i & (1 << counter)) != 0)
            *jedynki += 1;

        zlicz(i, --counter, jedynki);
    }
}

int Cardinality(int zbior)
{
    int card = 0;

    zlicz(zbior, 31, &card);

    return card;
}
