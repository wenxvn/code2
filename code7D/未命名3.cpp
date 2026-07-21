#include <bits/stdc++.h>
using namespace std;
const int mod=100;
const int N=3e5+10;
int cnt[101];
int main()
{
    int n,x;
    int num=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        for(int j=x+1;j<101;j++)
        {
            num=(num+cnt[j])%mod;
        }
        cnt[x]++;
    }
    cout<<num;
    return 0;
}
