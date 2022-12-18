#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    char s[101], t[101];
    cin >> s >> t;
    std::cout << strcmp(strlwr(s), strlwr(t));
    return 0;
}