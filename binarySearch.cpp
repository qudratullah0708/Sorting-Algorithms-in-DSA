#include<iostream>
using namespace std;


int binarySearch(int arr[],int l,int u,int item){
	
   int middleIndex = (l+u)/2;
   if(l>=u){
      return -1;
   }

    if(arr[middleIndex]==item){
	return middleIndex;
   }
    else if(item<arr[middleIndex]){
	    u = middleIndex - 1;
		binarySearch(arr,l,u,item);
   }
   else if(item>arr[middleIndex]){
	   l = middleIndex + 1;
       binarySearch(arr,l,u,item);
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
    cout<<"Enter element to be searched: ";
    int item;
    cin>>item;
    int res = binarySearch(arr,0,n-1,item);
   cout<<"The element is found at index: "<<res;
}