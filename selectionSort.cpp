#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int a[], int n)
{

	for(int i=0;i<n-1;i++)
	{
		int startIndex = i;
		for(int j = i+1;j<n;j++)
		{
			if(a[j]<a[startIndex])
			{
				startIndex = j;
			}
		}
		swap(&a[startIndex],&a[i]);
	}
}

void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  