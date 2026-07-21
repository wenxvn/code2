#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	int ans=1;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		ans*=t;
		ans%=998244353;
	}
	cout<<ans;
	return 0;
}
