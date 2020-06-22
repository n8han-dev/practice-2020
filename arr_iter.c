#include <stdlib.h>
#include <time.h>

int cnt_zer(int arr[]); // function prototype

int fill_arr(int range) // fill array eith random numbers ftom -range to +range; input: integer
{
    int res;
    static int arr[1000]; // fixed size array, due to task
    srand(time(NULL)); // seed random
    for (int i=0; i<1000; i++)
    {
        arr[i] = rand() % (range * 2) - range;
    }
    res = cnt_zer(arr); // call counter function
    return res; // return int
}

int cnt_zer(int arr[]) // count max 0's in a row; input: integer array
{
    int cnt=0, res=0; // counter and result set to 0
    for (int i=0; i<1000; i++)
    {
        if (!arr[i]) // if 0 then increment counter by 1
        {
            cnt++;
        }
        else // if not 0 reset counter and if counter > result, write counter to result
        {
            if (cnt>=res)
                res = cnt;
            cnt=0;
        }
    }
    return res; // returns int
}