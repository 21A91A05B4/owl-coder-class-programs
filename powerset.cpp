#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=1<<n;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))>0)
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}