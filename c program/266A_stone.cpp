#include<stdio.h>
main()
{
	int i,count=0;
	int p;
	scanf("%d",&p);
	char a[p];
	for(i=0;i<=p;i++)scanf("%d",&a[i]);
	for(i=0;i<=p-1;i++)
	{
		if(a[i]==a[i+1])count++;
	}
	printf("%d",count);

}
