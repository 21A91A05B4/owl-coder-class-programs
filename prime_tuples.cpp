#include <bits/stdc++.h>
using namespace std;
int N=1e6+1;
vector<int>primes(N,1);
void generate_seive(vector<int>&primes){
    
	primes[0]=0;
	primes[1]=0;
	for(int i=2;i*i<=N;i++){
		if(primes[i]==1){
			for(int j=(i*i);j<N;j+=i){
				primes[j]=0;
			}
		}
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q=0;
	    cin>>n;
	    vector<int>res;
	    int ans=0;
	    generate_seive(primes);
	    for(int i=2;i<=n;i++){
	        if(primes[i]==1){
	            res.push_back(i);
	        }
	    }
	    
	    for(int j=1;j<res.size();j++){
	        int p=res[j]+2;
	        if(find(res.begin(),res.end(),p)!=res.end()){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;   
	}

}
