#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; 
    cin >> n;
    int mn = 1e9;
    int mnIdx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < mn){
            mn = x;
            mnIdx = i;
        }
    }
    cout << mnIdx;
    return 0;
}