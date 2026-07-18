#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	string s;cin>>s;
	int ans=0;
	int len=0;
	int left=0;
	int right=0;
	for(char c:s){
		if(c=='('){
			left++;
			if(len>0){
				ans+=len;
				len--;
			}
		}
		else {
			right++;
			len=right-left;
		}
	}
	cout<<ans<<'\n'; 
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	while(n--){
		solve();
	}
	return 0;
}
