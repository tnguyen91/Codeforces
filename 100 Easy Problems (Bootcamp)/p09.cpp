#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, freq = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == '8') ++freq;
    }
    cout << min(n / 11, freq);
    return 0;
}