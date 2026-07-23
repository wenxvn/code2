#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<bool>&vis,vector<string>&s,int n,char end,char y){
	if(end==y)return true;
	for(int i=0;i<n;i++){
		if(!vis[i]&&s[i][0]==end){
			vis[i]=true;
			if(dfs(vis,s,n,s[i][s[i].size()-1],y))return true;
			vis[i]=false;
		}
	}
	return false;
}
bool solve(int n,int q,vector<string>&s,char x,char y){
	for(int i=0;i<n;i++){
		if(s[i][0]==x){
			vector<bool>vis(n);
			vis[i]=true;
			if(dfs(vis,s,n,s[i][s[i].size()-1],y))return true;
		}
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		vector<string>s(n);
		for(int i=0;i<n;i++)cin>>s[i];
		while(q--){
			char x,y;cin>>x>>y;
			if(solve(n,q,s,x,y))cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
