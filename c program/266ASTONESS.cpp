#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	char a[n];
	for(i=0;i<=n;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==a[i+1])++count;
	}
	printf("%d",count);
	return 0;
}
