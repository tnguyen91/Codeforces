#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, c;
    cin >> n;
    int f[3] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> c;
            f[j] += c;
        }
    }
    bool t = 1;
    for (int i = 0; i < 3; i++){
        if (f[i] != 0){
            t = 0;
            break;
        }
    }
    cout << (t ? "YES" : "NO");
    return 0;
}