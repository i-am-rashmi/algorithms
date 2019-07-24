#include<iostream>
using namespace std;

int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}

void printSorted(int a[],int n)
{
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int a[] = {14,8,26,30,38,2};
	int n = sizeof(a)/sizeof(a[0]);
	bubbleSort(a,n);
	printSorted(a,n); 
}