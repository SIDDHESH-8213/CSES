#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

void solve(){
    ll a, b;
    cin>>a>>b;
    ll c = min(a, b);
    ll d = max(a, b);
    if(d > 2*c || (c == 2 && d == 2)) cout<<"NO\n";
    else if((a+b)%3 != 0) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){
    ll tc;
    cin>>tc;
    while(tc--) solve();
    return 0;
}