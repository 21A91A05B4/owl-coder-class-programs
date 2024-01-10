#include<bits/stdc++.h>
using namespace std;
int BE(int a,int b){
	int res=1;
	while(b){
		if(b&1){
			b=b-1;
			res*=a;
		}
		else{
			b/=2;
			a=a*a;
		}
	}
	return res;
}
int main(){                 //power of 2 numbers
	int a,b;
	cin>>a>>b;
	int ans=BE(a,b);
	cout<<ans;
}
