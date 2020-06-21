int cnt_zer(int arr[])
{
    int cnt=0, res=0;
    for (int i=0; i<1000; i++)
    {
        if (!arr[i])
        {
            cnt++;
        }
        if (arr[i])
        {
            if (cnt>=res)
                res = cnt;
            cnt=0;
        }
    }
    return res;
}