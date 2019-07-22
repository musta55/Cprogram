#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lli%lli",&n,&m);
    double a[n],b[n];
    double cost[n];
    double swap;
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf",&a[i],&b[i]);
        cost[i]=(a[i]/b[i])*m;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(cost[j]>cost[j+1])
            {
                swap=cost[j];
                cost[j]=cost[j+1];
                cost[j+1]=swap;
            }
        }
    }
    printf("%.8lf",cost[0]);
    return 0;
}
