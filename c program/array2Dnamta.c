#include<stdio.h>
int main(){
	short int row,col,ara[10][10];
	int even=0,odd=0,sum=0;
	for(row=0;row<10;row++){
	
		for(col=0;col<10;col++){
			ara[row][col]=(row+1)*(col+1);
			sum=sum+ara[row][col];
			printf("%d*%d=%d\n",(row+1),(col+1),ara[row][col]);
			if(ara[row][col]%2==0){
				even=even+1;
			}
			else{
			
			odd=odd+1;
}
			}
				printf("\n\n");
		}
		
		printf("even number :%d\n,odd number :%d\n",even,odd);
		printf("\n,sum is : %d",sum);
		return 0;
	}
	
