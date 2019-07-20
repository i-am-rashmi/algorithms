#include<iostream>
using namespace std;


void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 

void merge(int arr[],int leftIndex, int midIndex, int rightIndex)
{
	int n1 = midIndex-leftIndex+1;
	int n2 = rightIndex-midIndex;

	cout<<"n1 is:"<<n1<<"\n";
	cout<<"n2 is:"<<n2<<"\n";

	int i,j,k;

	int leftArr[n1], rightArr[n2];

	for(i=0;i<n1;i++)
	{
		leftArr[i] = arr[i];
	}

	cout<<"Left array:"<<"\n";
	printArray(leftArr,n1);



	for(j=0;j<n2;j++)
	{
		rightArr[j] = arr[midIndex+1+j];
	}
	cout<<"Right array:"<<"\n";
	printArray(rightArr,n2);

	i=0;
	j=0;
	k=leftIndex;

	while(i<n1 && j<n2)
	{
		if(leftArr[i]<rightArr[j])
		{
			arr[k] = leftArr[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = rightArr[j];
			j++;
			k++;
		}
	}

	while(i<n1)
	{
		arr[k] = leftArr[i];
		k++;
		i++;
	}

	while(j<n2)
	{
		arr[k] = rightArr[j];
		k++;
		j++;
	}


	
}
void mergeSort(int arr[], int leftIndex, int rightIndex)
{
	if(leftIndex< rightIndex)
	{

		int midIndex = leftIndex+rightIndex/2;
		cout<<"Mid Index is:"<<" "<<midIndex<<"\n";
		mergeSort(arr,leftIndex,midIndex);
		mergeSort(arr,midIndex+1, rightIndex);
		merge(arr,leftIndex,midIndex,rightIndex);
	}

	
}



int main()
{
	int arr[] = {3, 19,26,45,2,6,1,22};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<"Array before sorting:"<<"\n";
	printArray(arr,n);

	cout<<"Merge sort invoked"<<"\n";
	mergeSort(arr,0,n-1);

	cout<<"Array before sorting:"<<"\n";
	printArray(arr,n);

}
