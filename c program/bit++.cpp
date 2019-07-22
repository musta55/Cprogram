#include<stdio.h>
int main()
{
	int n,x=0,i;
	scanf("%d",&n);
	char a[200];
	for(i=0;i<n;i++)
	{
		
			scanf("%s",a);
	if(a[1]=='+'){
	x++;}
	else if(a[1]=='-'){
	--x;	
}
	}
	
	printf("%d\n",x);
	return 0;
}
