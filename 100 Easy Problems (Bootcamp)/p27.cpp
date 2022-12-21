#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    vector<int> idx;
    
    for(i, 0, n - 1){
        int x;
        cin >> x;
        v.pb(x);
        idx.pb(i);
        if (i > 0 && v[i] > v[i - 1]){
            sort(v.begin(), v.end(), greater<int>());
            for(j, 0, i){
                if (v[j] == x) idx[i] = j;
            }
        }
    }

    for(i, 0, n-1){
        cout << idx[i] + 1 << '\n';
    }

    for(i, 0, n-1){
        cout << v[i] << ' ';
    }
    return 0;
}