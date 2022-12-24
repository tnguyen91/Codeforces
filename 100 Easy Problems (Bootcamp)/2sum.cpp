#include <bits/stdc++.h>
using namespace std;

#define ll long long;
// #define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) 
                ok = true;
        }
    }
    cout << (ok ? "YES" : "NO");

    return 0;
}