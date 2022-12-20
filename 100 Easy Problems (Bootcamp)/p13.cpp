#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a; cin >> a;
    ll sum = 0;
    for (ll i = sqrt(a); i >= 1; i--){
        if ((a%i) == 0){
            sum = i + a/i;
            break;
        }
    }
    cout << 2 * sum;
    return 0;
}