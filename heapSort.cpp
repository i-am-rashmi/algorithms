#include<iostream>
using namespace std;


void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int arr[],int n,int i)
{
	int largest = i;
	int left = 2*i +1;
	int right = 2*i+2;

	if(left<n && arr[left]>arr[largest])
		largest = left;
	else
		largest = i;
	if(right<n && arr[right]>arr[largest])
		largest = right;

	if(largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr,n,largest);
	}

}
void heapSort(int arr[], int n)
{
	for(int i= n/2-1;i>=0;i--)
		heapify(arr,n,i);

	for(int j=n-1;j>=0;j--)
	{
		swap(&arr[0], &arr[j]);
		heapify(arr,j,0);

	}

}
void printSorted(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int arr[] = {1,2,46,27,90,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	heapSort(arr,n);
	printSorted(arr,n);

}