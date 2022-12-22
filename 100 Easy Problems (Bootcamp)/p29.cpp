#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    vector<bool> v;
    for(i, 0, t-1)
    {
        int c[3];
        cin >> c[0] >> c[1] >> c[2];
        sort(c, c+3);
        if (c[2] > c[0] + c[1] + 1) v.pb(false);
        else v.pb(true);
    }
    for(i, 0, t-1){
        cout << (v[i] == 1 ? "Yes" : "No") << '\n';
    }
    return 0;
}