#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
	int temp;
	int min_index;
	for(int i=0;i<n-1;i++){
		min_index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
		}        temp = arr[i]; 
				arr[i] = arr[min_index];
				arr[min_index] = temp; 
	}
}
	

int main(){
	cout<<"Enter size of array: ";
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
    	cout<<"Enter "<<i+1<<"th element ";
    	cin>>arr[i];
	}	
	
	selectionSort(arr,n);
	cout<<"Sorted array is ";
	for(int i=0;i<n;i++)
    {
    
    	cout<<arr[i]<<" ";
	}
	
}