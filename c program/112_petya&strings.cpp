#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char a[200],b[200];
	gets(a);
	gets(b);
	l=strlen(a);
	
	if(l==strlen(b))
{
		for(i=0;i<l;i++){
		
		if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';
			if(b[i]>='A'&&b[i]<='Z')b[i]=b[i]-'A'+'a';
}

}
	printf("%d",strcmp(a,b));

return 0;
}
