#include<stdio.h>
#include<string.h>
int main()
{	
	int i,j,count=0;
	char a[200],b[100],c[200];
	gets(a);
	gets(b);
	gets(c);
	if((strlen(a)+strlen(b))!=strlen(c)){
	printf("NO");
	return 0;
}
	strcat(a,b);
	for(i=0;i<strlen(c);i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(c[i]==a[j]){
				a[j]='$';
					count++;
				break;
			
			}
		}
	}
	
	if(count==strlen(c))
	printf("YES");
	else printf("NO");
	return 0;
}
