#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, cnt = 0;
    cin >> n;
    bool arr[n+1] {0};
    vector<int> v;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (arr[i] == 0){
            for (int j = i*i; j <= n; j += i){
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        if (arr[i] == 0) v.push_back(i);
    }
    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }
    return 0;
}