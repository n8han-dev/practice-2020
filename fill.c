#include <stdlib.h>
#include <time.h>
#include "count_zer.h"
int fill_arr(int range)
{
    int res;
    static int arr[1000];
    srand(time(NULL));
    for (int i=0; i<1000; i++)
    {
        arr[i] = rand() % (range * 2) - range;
    }
    res = cnt_zer(arr);
    return res;
}