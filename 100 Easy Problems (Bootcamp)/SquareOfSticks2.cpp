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
    if (n < 4) cout << 0;
    else{
        sort(a, a+n);
        cout << a[n-4] * a[n-4];
    }
    return 0;
}