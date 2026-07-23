#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	string s;cin>>s;
	vector<int>cnt(s.size()+1);
	for(int i=0;i<s.size();i++){
		cnt[i+1]=cnt[i]+s[i]-'0';
	}
	int ans=0;
	for(int i=0;i<=s.size();i++){
		for(int j=i+1;j<=s.size();j++){
			if(cnt[j]-cnt[i]>0)ans++;
		}
	}
	cout<<ans;
	return 0;
}
