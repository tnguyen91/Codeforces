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
    bool ans[t] = {0};
    for(i, 0, t-1){
        int r,g,b;
        cin >> r >> g >> b;
        if (abs(r - g) > 2 || abs(g - b) > 2 || abs(b - r) > 2){
            ans[i] = 1;
        }
    }
    for(i, 0, t-1){
        cout << (ans[i] == 0 ? "Yes" : "No") << '\n';
    }
    return 0;
}