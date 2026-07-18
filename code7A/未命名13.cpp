#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int A=0;
	int B=0;
	int n;cin>>n;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		A+=t%10;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		B+=t%10;
	}
	if(A%2==0||B%2==0)cout<<"even";
	else cout<<"odd";
	return 0;
}
