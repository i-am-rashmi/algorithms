#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[], int p, int r)
{
	int x = a[r];
	int i = p-1;

	for(int j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void quickSort(int a[],int p,int r)
{
	if(p<r)
	{
		int q = partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
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
	int a[] = {35,29,67,10,26,4,3};
	int n = sizeof(a)/sizeof(a[0]);

	quickSort(a,0,n-1);
	printSorted(a,n);
}