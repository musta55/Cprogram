#include<stdio.h>
int main()
{
	int i,j,ara[3][10];
	for(i=0;i<2;i++){
		for(j=0;j<10;j++){
			printf("enter  number %d of column no %d :",j+1,i+1);
			scanf("%d\n",&ara[i][j]);
			
		}
		
	}
	for(j=0;j<10;j++){
		ara[2][j]=ara[1][j]+ara[0][j];
		printf("%d+%d=%d\n",ara[0][j],ara[1][j],ara[2][j]);
		
	}
	return 0;
}
