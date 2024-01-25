// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int temp[high+1];
    while(i<=mid and j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=high)
    {
        temp[k++]=arr[j++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i];
    }
    
}
void Mergesort(int*arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    Mergesort(arr,low,mid);
    Mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
