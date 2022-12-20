#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int a){
    if (a <= 1) return false;
    for (int i = 2; i < a; ++i){
        if (a % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int cnt = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (isPrime(j) && i % j == 0) ++cnt;
            if (cnt > 2) break;
        }
        if (cnt == 2) ++ans;
    }
    cout << ans;
    return 0;
}