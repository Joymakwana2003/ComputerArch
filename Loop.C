#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n = 100;
    int  a =0;
    int  b=0;

    for (int i=0; i<n; i++)
    {
        if (i==0)
        {
            printf("0 ");
        }
        if (i==1){
            printf("1 ");
            b=1;
        }
        if (i>1)
        {
            printf("%d ", a+b);
            int temp = a;
            a = b;
            b = temp + b;
        }
        
    }
    return 0;
}
