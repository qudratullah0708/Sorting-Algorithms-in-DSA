#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	int temp;
	for(int i=1;i<n;i++){
			temp = arr[i];
		int j=i-1;
		while( j>=0  && arr[j]>temp){
			      arr[j+1] = arr[j];
			      // arr[j] = temp; placed it outside to avoid repetition of steps 
			      j--;
		}
		    arr[j+1] = temp;  // is placed outside the while loop to ensure that the correct position
			                 //  j+1 outside OR j inside loop
				
		} 
	cout<<"Sorted array is :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
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
	
	insertionSort(arr,n);
}