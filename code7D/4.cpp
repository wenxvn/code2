#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;cin>>s;
	unordered_map<string,int>mp;
	for(int i=0;i<s.size();i++){
		for(int j=i;j<s.size();j++){
			string t=s.substr(i,j-i+1);
			mp[t]++;
		}
	} 
	cout<<mp.size();
	return 0;
}
