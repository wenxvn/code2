#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;cin>>n>>m;
	vector<vector<int>>ans(m,vector<int>(m));
	while(n--){
		vector<vector<int>>a(m,vector<int>(m));
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		vector<vector<int>>b(m,vector<int>(m));
		b=ans;
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					ans[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				ans[i][j]%=2;
			}
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
