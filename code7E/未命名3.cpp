#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin >> T;
    while (T--) {
        int n, q;cin >> n >> q;
        bool reach[26][26] = {};
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            int u = s.front() - 'a';
            int v = s.back() - 'a';
            reach[u][v] = true;
        }
        // Floyd Çó´«µÝ±Õ°ü
        for (int k = 0; k < 26; ++k) {
            for (int i = 0; i < 26; ++i) {
                for (int j = 0; j < 26; ++j) {
                    reach[i][j] =reach[i][j] || (reach[i][k] && reach[k][j]);
                }
            }
        }
        while (q--) {
            char x, y;cin >> x >> y;
            cout << (reach[x - 'a'][y - 'a'] ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
