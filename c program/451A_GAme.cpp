#include<stdio.h>
main()
{
	int m,n,s=1,k,flag=1;
	scanf("%d%d",&m,&n);
	if(m<=n)k=m;
	else k=n;
	while(1)
	{
	2	if(k==1)break;
		if(flag==1)flag=0;
		else if(flag==0) flag=1;
	
			k--;
	}
	
		if(flag==1)printf("Akshat");
		else printf("Malvika");
		return 0;
	}
