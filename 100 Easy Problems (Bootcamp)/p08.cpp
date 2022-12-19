#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, l, a;
    int start, forMin, t = 0, breaks = 0;
    cin >> n >> l >> a;
    for (size_t i = 0; i < n; i++)
    {
        cin >> start >> forMin;
        breaks += (start - t) / a;
        t = start + forMin;
    }
    breaks += (l - t) / a;
    cout << breaks;
    return 0;
}