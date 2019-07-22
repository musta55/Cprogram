#include<stdio.h>
int main()
{   int a,b,c,d,i;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    int a1[a],b1[b];
    for(i=0;i<a;i++)scanf("%d",&a1[i]);
    for(i=0;i<b;i++)scanf("%d",&b1[i]);
    if(a1[c-1]<b1[b-d])
        printf("YES");
    else printf("NO");
} 
