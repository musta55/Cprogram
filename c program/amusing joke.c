#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	char s[90];
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			c++;
		}
		else
		{
			printf("%d",c);
			c=0;
		}
	}
	printf("%d",c);
}
