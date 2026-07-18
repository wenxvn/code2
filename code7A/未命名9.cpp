#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD = 998244353;
const int LIMIT = 31623;  // sqrt(1e9)
int64 qpow(int64 a, int b) {
    int64 result = 1;
    while (b > 0) {
        if (b & 1) {
            result = result * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return result;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 筛出 sqrt(1e9) 以内的质数
    vector<bool> isPrime(LIMIT + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= LIMIT; ++i) {
        if (!isPrime[i]) {
            continue;
        }
        primes.push_back(i);
        if (1LL * i * i <= LIMIT) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    // maxExponent[p] 表示质因数 p 的最大指数
    unordered_map<int, int> maxExponent;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        for (int p : primes) {
            if (1LL * p * p > x) {
                break;
            }
            if (x % p != 0) {
                continue;
            }
            int count = 0;
            while (x % p == 0) {
                x /= p;
                ++count;
            }
            maxExponent[p] = max(maxExponent[p], count);
        }
        // 剩余部分一定是质数
        if (x > 1) {
            maxExponent[x] = max(maxExponent[x], 1);
        }
    }
    int64 answer = 1;
    for (auto [prime, exponent] : maxExponent) {
        answer = answer * qpow(prime, exponent) % MOD;
    }
    cout << answer << '\n';
    return 0;
}

