#include<bits/stdc++.h>
using namespace std;
#define int long long 
int gcd(int x,int y){
	if(x<y)swap(x,y);
	while(y){
		int t=x%y;
		x=y;
		y=t;
	}
	return x;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	int ans;cin>>ans;
	int t;
	for(int i=1;i<n;i++){
		cin>>t;
		if(t%ans==0||ans%t==0)continue;
		ans=ans/gcd(ans,t)*t;
		ans%=998244353;
	}
	cout<<ans;
	return 0;
}
