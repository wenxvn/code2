#include<bits/stdc++.h>
using namespace std;
#define int long long
bool solve(){
	int a,b;cin>>a>>b;
	if(a%2&&b%2)return false;
	return true;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		if(solve())cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
//4 8 12 16 20
//(1,1)
//(1,3) 2,2
//(1,5) 2,4 3,3
//(1,7) 2,6 3,5 4,4
