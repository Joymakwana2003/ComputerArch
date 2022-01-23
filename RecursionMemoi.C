#include <stdio.h>
#include <stdlib.h>

int Fibbonaci(int n, int arr[])
{

    if (n <= 1){
        return n;
    }

    if (arr[n] != 0){
        return arr[n];
    }

    else{
        arr[n] = Fibbonaci(n-2, arr) + Fibbonaci(n-1, arr);
        return arr[n];
    }
}

int main()
{
    int n=100;

    int arr[1000] = {0};

    for (int i =0; i<n; i++)
    {
        int ans = Fibbonaci(i, arr);
        printf("%d ", ans);
    }

    return 0;
}
