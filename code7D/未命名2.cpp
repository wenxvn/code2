#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int>s(101);
	int n;cin>>n;
	int t;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>t;
		for(int j=t+1;j<101;j++){
			ans+=s[j];
			ans%=100;
		}
		s[t]++;
	}
	cout<<ans%100;
	return 0;
}
