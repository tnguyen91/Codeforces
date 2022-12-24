#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define for(i, a, b) for(int i = (a); i <= (b); ++i)
#define rfor(i, a, b) for(int i = (a); i >= (b); --i)
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    char l[6] = {'a','i','e','o','s'};
    char n[6] = {'4','1','3','0','5'};
    string s;
    cin >> s;
    for(i, 0, s.size() - 1){
        for(j, 0, 4){
            if (s[i] == l[j]) s[i] = n[j];
        }
    }
    cout << s;
    return 0;
}