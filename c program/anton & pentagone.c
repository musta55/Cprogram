#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	char a[15];

	for(i=0;i<=n;i++)
	{
		fgets(a,15,stdin);
		{
			if(a[0]=='I')sum+=20;
			else if(a[0]=='D')sum+=12;
			else if(a[0]=='O')sum+=8;
			else if(a[0]=='C')sum+=6;
			else if(a[0]=='T')sum+=4;
		}
	}
	printf("%d",sum);
	return 0;
}
