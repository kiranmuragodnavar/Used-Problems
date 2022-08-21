#include <bits/stdc++.h>
#ifdef debug
    #include "yuvraj/debug.h"
#else
    #define bug(x) 18;
#endif

#define int    long long
using namespace std;

void solve(){
    string s;
    cin >> s;

    int ok = 1;
    map<char, int> m;

    for(auto i:s) m[i]++;

    if(s.size() < 8) ok = 0;

    if(m['0'] == 0) ok = 0;

    if(m['1'] == 0 and m['3'] == 0 and m['5'] == 0 and m['7'] == 0 and m['9'] == 0) ok =0 ;

    if(m['@'] == 0 and m['#'] == 0 and m['$'] == 0 and m['*'] == 0 and m['&'] == 0 and m['_'] == 0) ok = 0;

    cout << (ok ? "YES" : "NO") << '\n';
    

}    

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) solve();

}
