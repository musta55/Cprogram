#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int number[n];
   int m[n],j=0 ,max;
   for(int i=0;i<n;i++)
   {
       m[i]=0;
   }
   for(int i=0;i<n;i++)
   {
       scanf("%d",&number[i]);
   }
   for(int i=1;i<n;i++)
   {
       if(number[i]>=number[i-1])
       {
         m[j]++;
       }
       else
       {
           j++;
       }
   }
   max=m[0];
   for(int i=0;i<n;i++)
   {
       if(m[i]>max)
        max=m[i];
   }
   printf("%d",max+1);
   return 0;
}
