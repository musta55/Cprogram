#include<stdio.h>
int main()
{
   int t;

    char y[100];
    scanf("%d",&t);
    int z[t];
    for(int i=1;i<=t;i++)
    {
         int n,r,p,s,res=0;
         char x[100];
    scanf("%d",&n);

    scanf("%d%d%d",&r,&p,&s);
  scanf("%s",x);
    for(int j=0;j<n;j++)
    {
        if(x[j]=='R' && p>=0)
        {
            y[j]='P';
            p --;
            res++;
        }
        if(x[j]=='P' && s>=0)
        {
            y[j]='S';
            s--;
            res++;
        }
        if(x[j]=='S' && r>=0)
        {
            y[j]='R';
            r--;
            res++;
        }

    }
    if((n/2)>=res)printf("NO\n");
    else
    {
        printf("YES\n");
        puts(y);
    }
 /*
    if((n/2)>=res)z[i]=0;
    else
    {
       z[i]=1;

    }

    }
   for(int i=0;i<t;i++)
    {
        if(z[i]==0)printf("NO\n");
        else
        {
            printf("YES\n");
            puts(y);

        }
    }*/



}
}
