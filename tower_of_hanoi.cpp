#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void th(ll n, ll s, ll e, ll h, vector<vector<ll>> &vt){
    if(n == 1) {
        //cout<<s<<" "<<e<<"\n";
        vt.push_back({s, e});
        return;
    }

    th(n-1, s, h, e, vt);
    vt.push_back({s, e});
    th(n-1, h, e, s, vt);
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> vt;
    th(n, 1, 3, 2, vt);
    cout<<vt.size()<<"\n";
    for(auto i : vt){
        for(auto it : i){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    solve();
    return 0;
}
