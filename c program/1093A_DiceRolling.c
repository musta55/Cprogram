#include<stdio.h>
int main()
{
    int t,i,n,c=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

      do {
            n-=7;
            c++;

        }  while(n>0);

        a[i]=c;
        c=0;
    }
    for(i=0;i<t;i++)printf("%d\n",a[i]);
    return 0;
}
