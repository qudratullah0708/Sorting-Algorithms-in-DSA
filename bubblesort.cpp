#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		bool flag = false;
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				flag = true;
			}
		}
		// Modified bubble sort
		if (flag==false){
				break;
			}
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
	
	bubbleSort(arr,n);
	cout<<"Sorted array is ";
	for(int i=0;i<n;i++)
    {
    
    	cout<<arr[i]<<" ";
	}

	
}