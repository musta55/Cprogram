#include<stdio.h>
#include<string.h>
int main(){
	char SAARC[7][100]={"BANGLADESH" ,"INDIA" ,"PAKISTAN" ,"SRI LANKA" ,"NEPAL" ,"BHUTAN" ,"MALDIVES" };
	int row,col,length;
	for(row=0;row<7;row++){
		length=strlen(SAARC[col]);
		for(col=0;col<=length;col++){
		
		printf("(%d,%d)= %c\n",row,col,SAARC[row][col]);
		}
		printf("\n");
	}
	return 0;
}

