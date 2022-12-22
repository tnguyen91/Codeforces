#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string p, h;
        cin >> p >> h;
        bool b = false;
        if (h.size() < p.size()){
            b = false;
        }
        else{
            sort(p.begin(), p.end());
            for(i, 0, h.size() - p.size()){
                string temp = h.substr(i, p.size());
                sort(temp.begin(), temp.end());
                if (p == temp){
                    b = true;
                    break;
                }
            }
        }
        cout << (b ? "YES\n" : "NO\n");
    }
    return 0;
}