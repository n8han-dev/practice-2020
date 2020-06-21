#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fill.h"

int main(void)
{
    int range, res;
    printf("Enter range: ");
    scanf("%d", &range);
    res = fill_arr(range);
    printf("%d\n", res);
}
