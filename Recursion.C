#include <stdio.h>
#include <stdlib.h>

long Fibbonaci(int n)
{
    if (n == 0 || n==1){
        return n;
    }

    else{
        return Fibbonaci(n-2) + Fibbonaci(n-1);
    }
}

int main()
{
    for (int i =0; i<50; i++)
    {
        int ans = Fibbonaci(i);
        printf("%d ", ans);
    }

    return 0;
}
