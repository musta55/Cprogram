#include<stdio.h>
#include<conio.h>
int main()
{
	
	char a,b,temp;
	int i;
	clrscr(a);
	a=getchar();
	printf("kire mama %c",a);
	for(i=1;i<20;i++){
		b=getchar();
		if(b<a)
		{
			temp=a;a=b;b=temp;	
		}
	printf("Smallest character is :%c",a);
	}

	return 0;
}
