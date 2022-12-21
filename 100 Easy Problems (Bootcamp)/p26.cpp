#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; ++i){
        int mIdx = i;
        for (int j = i; j < n; ++j){
            if (arr[mIdx] > arr[j]) mIdx = j;
        }
        if (arr[mIdx] < arr[i]) swap(arr[mIdx], arr[i]);
        for (int k = 0; k < n; ++k){
            cout << arr[k] << ' ';
        }
        cout << '\n';
    }
    return 0;
}