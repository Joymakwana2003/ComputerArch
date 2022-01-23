#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    double Arr1[n][n];
    double Arr2[n][n];
    double Ans[n][n];
    int joy;

    for (int i =0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            Arr1[i][j] = rand()%10+1;
            Arr2[i][j] = rand()%10+1;
        }
    }

    struct timespec ts;
    char buff[100];

    timespec_get(&ts, TIME_UTC);
    unsigned long long int start = ts.tv_nsec;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            joy = 0;
            for (int k =0; k<n; k++)
            {
                joy += Arr1[i][k]*Arr2[k][j];
            }
            Ans[i][j] = joy;
            printf("%f\
            ", Ans[i][j]);
        }
    }
    timespec_get(&ts, TIME_UTC);
    unsigned long long int end = ts.tv_nsec;
    strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
    unsigned long long int ans = (end-start);
    printf("\n");
    printf("Time elapsed: ");
    printf("%lld", ans);
    printf(" ns\n");
    return 0;
}
