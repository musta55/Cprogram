#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char c,inp[101],a[]="qwertyuiopasdfghjkl;zxcvbnm,./";
	scanf("%c",&c);
	scanf("%s",&inp);
	for(i=0;inp[i]!='\0';i++){
		for(j=0;j<=30;j++)
		{
	if(inp[i]==a[j]){
		
	if(c=='R'){
		if(inp[i]=='q')printf("%c",a[0]);
		else printf("%c",a[j-1]);
		}
		if(c=='L')printf("%c",a[j+1]);	
	}
}
}
	return 0;
}
