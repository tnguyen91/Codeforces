#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, a, b, total = 0; 
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        total += c[i];
    }
    cout << total;
    return 0;
}