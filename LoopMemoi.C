#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 100;
    long arr[1000];

    for (int i=0; i<n; i++)
    {
        if (i==0)
        {
            printf("0 ");
            arr[0] =0;
        }

        if (i==1)
        {
            printf("1 ");
            arr[1] = 1;
        }

        if (i>1)
        {
            arr[i] = arr[i-1] + arr[i-2];
            int ans = arr[i-1]+arr[i-2];
            printf("%d ", ans);
        }      
    }
    
    return 0;
}
