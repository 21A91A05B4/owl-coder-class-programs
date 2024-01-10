#include<bits/stdc++.h>
using namespace std;
int mod=10e9+7;
int BE(int a,int b){
	int res=1;
	while(b){
		if(b&1){                    //power of 2 numbers
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
int inverse(int b){
	int x=BE(b,mod-2);               //inverse of a num
}
int main(){                 
	int a,b;
	cin>>a>>b;
	int ans=BE(a,b);
	cout<<ans;
	cout<<inverse(b);
}
