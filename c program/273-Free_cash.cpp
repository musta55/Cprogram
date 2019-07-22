#include<stdio.h>
int main()
{
	int n,i,j,count=1,man;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++)
	scanf("%d %d",&a[i][0],&a[i][1]);
	man=count;
	for(i=0;i<n-1;i++)
		{
			if(a[i][0]==a[i+1][0] &&a[i][1]==a[i+1][1])
			{
			count++;
			if(man<count)man=count;
		}
		else count=1;	
	}
	printf("%d",man);
	return 0;
	
}
