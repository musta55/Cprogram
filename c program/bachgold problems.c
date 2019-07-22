#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n/2);

   while(n>3)
   {
       n-=2;
       printf("2 ");
   }
   printf("%d",n);
   return 0;

}
