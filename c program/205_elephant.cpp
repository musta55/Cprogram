#include<stdio.h>
int main()
{
	int i,j,n,temp,cnt=0;
	scanf("%d",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lli",&a[i]);
		
	}
		for(i=0;i<n;i++)
	{
	
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])cnt++;
	}
	if(a[0]==a[1])
	{
		printf("Still Rozdil");
		
	}
	else printf("%d",cnt);
	
	return 0;
}
