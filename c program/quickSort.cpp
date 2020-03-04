#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
	int t;
		t=*a;
			*a=*b;
			*b=t;
}
int partition(int *A,int start,int end)
{
	int pivot,partitionIndex;
	pivot=A[end];
	partitionIndex=start;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			swap(&A[i],&A[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(&A[end],&A[partitionIndex]);
	return partitionIndex;
}
void quickSort(int *A,int start,int end)
{
	int partitionIndex;
	if(start<end){
	partitionIndex=partition(A,start,end);
	quickSort(A,start,partitionIndex-1);
	quickSort(A,partitionIndex+1,end);
	}
}

int main()
{
	int n,i;
	printf("number of elements:");
	scanf("%d ",&n);
	int A[n];

	for(i=0;i<n;i++)scanf("%d",&A[i]);

	quickSort(A,0,n);

	for(i=0;i<n;i++)printf("%d ",A[i]);
	return 0;
}
