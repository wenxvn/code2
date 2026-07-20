#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,q;cin>>n>>q;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	deque<int>s;
	for(int i=0;i<n;i++){
		s.push_back(a[i]);
	}
	while(q--){
		int t;cin>>t;
		if(t==1){
			int k=s.front();
			s.pop_front();
			s.push_back(k);
		}
		else if(t==2){
			int k=s.back();
			s.pop_back();
			s.push_front(k);
		}
	}
	while(!s.empty()){
		int k=s.front();
		cout<<k<<" ";
		s.pop_front();
	}
	return 0;
}
