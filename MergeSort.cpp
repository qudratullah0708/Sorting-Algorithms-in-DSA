#include<iostream>
using namespace std;
#include <algorithm>

// merge two sorted arrays by mysirg.com
void mergeSortedArrays(int arr[],int s, int mid,int e){
	 
	 int size1 = mid - s + 1;
	 int size2 = e - mid;
	 
	 int L[size1];int R[size2];
	 // Copy data to temporary arrays L[] and R[]
	 for(int i=0;i<size1;i++){
	 	// s and i both are 0 in first iteration
	 	L[i]=arr[s+i];
	 }
	 for(int j=0;j<size2;j++){
	 	// j is zero in first iteration
	 	R[j] = arr[mid + 1 + j] ;
	 }	 
	
	// Merge the temporary arrays back into arr[s..e]
    int i = 0, j = 0, k = s;
    while (i < size1 && j < size2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;   // k will be incremented in every case
    }
	  // Copy the remaining elements of L[], if there are any
	 
	 while (i<size1){
	 	arr[k] = L[i];
	 	i++;
	 	k++;
	 }
	 
    // Copy the remaining elements of R[], if there are any
	 while(j<size2){
	 	arr[k] = R[j];
	 	j++;
	 	k++;
	 }
      
}
void mergeSort(int arr[],int s,int e){
	// basecase
	if(s>=e)
	  return;
	  
	  
	  int i = s, j = e;
	   int mid = (s + e)/2;
	
	
	 
	 // sorting left sub array using recursion
	 mergeSort(arr,s,mid);
	 // sorting right sub array using recursion
     mergeSort(arr,mid+1,e);    
	 
	 // Merging two sorted arrays
	 mergeSortedArrays(arr,s,mid,e);
	 

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
	
	mergeSort(arr,0,n-1);
	
	 
	 cout<<"Sorted array is :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
}