
#include<stdio.h>
int main(){
	long long int i,n,add=0;
	scanf("%lli",&n);
	for(i=0;n!=0;i++)
	{
		if((n%2)==1){
			add++;
			n--;
		}
		else n/=2;
	}
	printf("%lli",add);
	return 0;
}
