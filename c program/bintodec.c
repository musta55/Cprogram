#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int i,decimal=0,power,length;
	char binary[64];
	printf("enter binary number :");
	scanf("%s",binary);
	length=strlen(binary);
	power=length-1;
	for(i=0;i<length;i++){
		decimal+=(binary[i]-'0')*pow(2,power);
		--power;
	}
		printf("decimal value is : %d",decimal);
		return 0;	
}
