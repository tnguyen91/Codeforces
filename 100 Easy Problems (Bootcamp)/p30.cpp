#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        int R = min(max(a,b), c + r);
        int L = max(min(a,b), c - r);
        cout << abs(b-a) - max(0, R - L) << '\n';
    }
    
    return 0;
}