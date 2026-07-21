#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt=0;
	unordered_map<int,int>mp;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		mp[t]++;
		cnt=max(cnt,mp[t]);
	}
	vector<int>ans;
	for(auto &t:mp){
		if(t.second==cnt)ans.push_back(t.first);
	}
	sort(ans.begin(),ans.end());
	for(int i:ans){
		cout<<i<<'\n';
	}
	return 0;
}
