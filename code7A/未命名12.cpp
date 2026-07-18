#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x=0;
	int y=0;
	string s;cin>>s;
	for(char c:s){
		if(c=='U')y++;
		else if(c=='D')y--;
		else if(c=='L')x--;
		else if(c=='R')x++;
	}
	cout<<x<<" "<<y;
	return 0;
}
