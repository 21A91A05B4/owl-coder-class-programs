#include<bits/stdc++.h>

using namespace std;
long long a,b,d,k;
vector<int>nums;
int dp[100][100][100];
long long fun(long long pos, long long cnt,long long flag){
	if(cnt>k)return 0;
	if(pos==nums.size()){
		if(cnt==k) return 1;
		else return 0;
	}
	if(dp[pos][cnt][flag]!=-1) return dp[pos][cnt][flag];
	int limit;
	if(flag==0){
		limit=nums[pos];
	}
	else{
		limit=9;
	}
	long long ans=0;
	for(int i=0;i<=limit;i++){
		int newflag=flag;
		int ncnt=cnt;
		if(i==d) ncnt++;
		if(flag==0 and i<limit ) newflag=1;
		if(ncnt<=k) ans+=fun(pos+1,ncnt,newflag);
	}
	return dp[pos][cnt][flag]=ans;
}

long long solve(long long b){
	memset(dp,-1,sizeof(dp));
	nums.clear();
	while(b){
		nums.push_back(b%10);
		b/=10;
	}
	reverse(nums.begin(),nums.end());
	long long res=fun(0,0,0);

	return res;
}

int main(){
	
	cin>>a>>b>>k>>d;
	long long ans1=solve(a-1);
	long long ans2=solve(b);
	cout<<ans2-ans1;
}
