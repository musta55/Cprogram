#include<stdio.h>
main()
{
	int i,count=0;
//	scanf("%d",&n);
	char a[100];
	gets(a);
	for(i=0;i<100-1;i++)
	{
		if(a[i]==a[i+1])count++;
	}
	printf("%d",count);

}
