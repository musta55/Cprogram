#include<stdio.h>
int main()
{
	int n,a,b,i,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if(b-2>=a)cnt++;
	}
	printf("%d",cnt);
	return 0;
	
}
