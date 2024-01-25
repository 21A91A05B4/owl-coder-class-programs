/*

//   BUBBLE SORT USING RECURSSION

#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int n){
	//base case
	if(n==1) return;
	//recurssive case
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
				
		}
	}
	bubblesort(arr,n-1);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}	
	
}*/
 //even without using single for loop:
 
 #include<bits/stdc++.h>
using namespace std;
void bubblesort(int i,int *arr,int n){
	//base case
	if(n==1) return;
	
	if(i==n-1){
		bubblesort(0,arr,n-1);
		return;
	}
	//recurssive case
	if(arr[i+1]<arr[i]){
		swap(arr[i],arr[i+1]);
	}
	bubblesort(i+1,arr,n);
	return;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(0,arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
	
}
 
 
 
 
 
 
