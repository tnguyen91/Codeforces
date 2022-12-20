#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, cnt = 0;
    cin >> n;
    int arr[n+1] = {0};
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (arr[i] == 0){
            ++cnt;
            for (int j = i; j <= n; ++j){
                
            }
        }
    }
    cout << cnt << '\n';
    for (int i = 0; i <= n; ++i)
    {
        if (arr[i] == 0) cout << i << ' ';
    }
    
    return 0;
}