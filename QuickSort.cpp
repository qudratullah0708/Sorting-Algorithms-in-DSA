#include<iostream>
using namespace std;
#include <algorithm>

// Quicksort by lovebabbar
int partition(int arr[],int s,int e){
       if (s == e) {
        return s;
    }

	int pivot = arr[s];
	int cnt=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			cnt++;
		}
	}
		int pivotIndex = s+cnt;
		swap(arr[pivotIndex],arr[s]);
	// pointer at first and last index of array 
	int i = s , j = e;
	while(i <pivotIndex && j > pivotIndex )
	{
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		
		if (i < pivotIndex && j > pivotIndex ){  // again checking to ensure whether i or j reach the pivotIndex in the same iteration
			swap(arr[i++],arr[j--]);
		}
	}
	
	return pivotIndex;
}
void quickSort(int arr[],int s,int e){
	// basecase
	if(s>=e)
	  return;
	  
	// partition to returning pivot
	 int p = partition(arr,s,e);
	 
	 
	 // sorting left sub array using recursion
	 quickSort(arr,s,p-1);
	 // sorting right sub array using recursion
	 quickSort(arr,p+1,e);    
	 
	

}
int main(){
	int n;
	cout<<"Enter no. of elements: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<"th value: ";
		cin>>arr[i];
	}
	
	quickSort(arr,0,n-1);
	
	 cout<<"Sorted array is :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
	
}