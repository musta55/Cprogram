#include<stdio.h>
int main()
{
	int i,j,k,l,count=0;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1){
				k=i;l=j;
			}
		}
	}
		while(1)
		{
		
			if(k<2){
				k++;count++;
			}
			else if(k>2){
				k--;
				count++;
			}
			if(l<2)
			{
				l++;count++;
			}
		else if(l>2){
			l--;count++;
		}
		if(l==2&&k==2)break;
	}
	
	printf("%d",count);
	
	
	
}
