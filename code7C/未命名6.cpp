#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;cin>>n>>m;
	vector<vector<int>>ans(m,vector<int>(m));
	vector<vector<int>>a(m,vector<int>(m));
	vector<vector<int>>b(m,vector<int>(m));
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>ans[i][j];
		}
	}
	n--;
	while(n--){
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					b[i][j]+=ans[i][k]*a[k][j];
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				b[i][j]%=2;
			}
		}
		ans=b;
		b.assign(m, vector<int>(m, 0));
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
