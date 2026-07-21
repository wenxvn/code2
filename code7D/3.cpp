#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;cin>>n>>m;
	vector<vector<int>>gra(n+1,vector<int>(m+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>gra[i][j];
		}
	}
	vector<vector<int>>ans(n+1,vector<int>(m+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int sum=0;
			for(int x=1;x<=i;x++){
				for(int y=1;y<=j;y++){
					sum+=gra[x][y];
				}
			}
			ans[i][j]=sum/(i*j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<ans[i][j]<<" "; 
		}
		cout<<'\n';
	}
	return 0;
}
