#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, a;
    cin >> n >> m >> a;
    cout << ceil(m/a) * ceil(n/a);
    return 0;
}