#include<stdio.h>
int main()
{
    unsigned long long int n,i,x1=0,x2=0,x3=0,z1,z2;
    scanf("%I64d",&n);
    unsigned long long int a;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a);
        x1+=a;
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%I64d",&a);
      x2+=a;
    }
    for(i=0;i<n-2;i++)
    {
        scanf("%I64d",&a);
        x3+=a;
    }
    z1=x1-x2;
    printf("%I64d\n",z1);
    z2=x2-x3;
    printf("%I64d",z2);

}
