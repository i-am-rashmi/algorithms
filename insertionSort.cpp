#include<iostream>
using namespace std;

void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
} 

void insertionSort(int arr[], int n)
{
	int i,j;
	int key;
	for(int i=0;i<n;i++)
	{
		key = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
		printArray(arr,n);
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
	insertionSort(arr,n);


}
