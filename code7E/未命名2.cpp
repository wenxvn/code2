#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		vector<vector<bool>>gra(26,vector<bool>(26));
		for(int i=0;i<n;i++){
			string s;cin>>s;
			gra[s.front()-'a'][s.back()-'a']=true;
		} 
		for(int k=0;k<26;k++){
			for(int i=0;i<26;i++){
				for(int j=0;j<26;j++){
					gra[i][j]=gra[i][j]||(gra[i][k]&&gra[k][j]);
				}
			}
		}
		while(q--){
			char x,y;cin>>x>>y;
			if(gra[x-'a'][y-'a'])cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
