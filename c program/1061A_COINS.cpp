You have unlimited number of coins with values 1,2,…,n. You want to select some set of coins having the total value of S.

It is allowed to have multiple coins with the same value in the set. What is the minimum number of coins required to get sum S?

Input
The only line of the input contains two integers n and S (1=n=100000, 1=S=109)

Output
Print exactly one integer — the minimum number of coins required to obtain sum S.

Examples
#include<stdio.h>
int main()
{
	int s,n,cnt=0;
	scanf("%d%d",&n,&s);
	while(s!=0)
	{
		if(s>=n)
		{
			s-=n;
			cnt++;
		}
		if(s<n)n--;
	}
	printf("%d",cnt);
	return 0;
}
