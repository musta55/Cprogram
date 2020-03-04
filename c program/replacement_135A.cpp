
#include<bits/stdc++.h>
using namespace std;
void swap(long *a,long *b)
{
	long t;
		t=*a;
			*a=*b;
			*b=t;
}
int partition(long *A,int start,int end)
{
	long pivot;
	int partitionIndex;
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
void quickSort(long *A,int start,int end)
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
    cin>> n;


	long A[n];

	for(i=0;i<n;i++)cin >> A[i];
	quickSort(A,0,n);



    if(A[n-1]==1)
       {
           A[n-1]=2;
           for(i=0;i<n;i++)cout << A[i];
       }
    else
    {
           printf("1 ");
    for( i=0;i<n-1;i++)
    {
         cout <<  A[i] ;
      cout << " ";
    }

    }


    return 0;

}

