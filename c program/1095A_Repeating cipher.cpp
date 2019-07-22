#include<stdio.h>
int main()
{
	int n,i,d=0;
	scanf("%d",&n);
	char a[n];
	gets(a);
	for(i=0;i<=n;i++)scanf("%c",&a[i]);
	for(i=0;i<=n;i+=d)
	{
		printf("%c",a[i]);
		d++;
	}
}
