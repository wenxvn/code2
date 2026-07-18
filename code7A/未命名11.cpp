#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n;cin>>n;
	int ans=0;
	int t;cin>>t;
	for(int i=1;i<n;i++){
		cin>>t;
		ans+=t;
	}
	cout<<ans<<'\n'; 
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
