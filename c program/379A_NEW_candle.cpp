#include<stdio.h>
int main()
{
	int a,b,i,k,j;
	scanf("%d%d",&a,&b);
	for(k=1,i=1,j=0;k<=a;k++,i++,j++)
	{
		if(i==b)
		{
			j++;
			i=1;
		}
	}
	printf("%d",j);
	return 0;
}
