#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=0;
	for(int i=0;i<n;i++){
		int minnum=a[i];
		for(int j=i;j<n;j++){
			minnum=min(minnum,a[j]);
			ans+=minnum;
		}
	}
	cout<<ans;
	return 0;
}
