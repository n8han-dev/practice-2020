/*
filename: main.c
author: Filatov E., 515b
creation date: 20.06.2020
practice 2020 task №36: count max 0's in a row in array with 1000 elements
*/

#include <stdio.h>
#include "arr_iter.h" // header file for custom library

int main(void)
{
    int range, res;
    printf("Enter range: "); // enter range of numbers included in random (-x;+x)
    scanf("%d", &range);
    res = fill_arr(range); // call external function to fill array and process it. returns int.
    printf("%d\n", res); // result output
}
