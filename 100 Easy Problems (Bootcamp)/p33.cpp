#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int snap(int a[], int start, int end){
    if (is_sorted(a + start, a + end)){
        return end - start;
    }
    else{
        return max(snap(a, start, (end+start)/2), snap(a, (end+start)/2, end));
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(i,0,n-1){
        cin >> a[i];
    }
    
    cout << snap(a, 0, n);
    return 0;
}