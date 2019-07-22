
	
#include<stdio.h>
int main()
{
	int A[100010],B[100010],a=0,b=0,i,n,k;
	long long sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];}
	for(i=1;i<=n;i++){
		scanf("%d",&B[i]);
		if(B[i]>a){
			a=B[i];
			k=i;}
	}
	for(i=1;i<=n;i++){
		if(k!=i&&B[i]>b) b=B[i];
	}
	if(sum>(a+b)) printf("NO");
	else printf("YES");
	return 0;
}
			
