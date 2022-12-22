#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    ll a[n];
    for(i, 0, n-1){
        cin >> a[i];
    }
    sort(a, a+n);
    ll l = 0;
    ll h = 0;
    for(i, 0, (n/2) - 1){
        h += a[i];
    }
    for(i, n/2, n-1){
        l += a[i];
    }
    cout << h * h + l * l;
    return 0;
}