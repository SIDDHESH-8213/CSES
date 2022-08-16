#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

vector<string> gr(ll n){
    if(n == 1){
        vector<string> st;
        st.push_back("0");
        st.push_back("1");
        return st;
    }

    vector<string> ts = gr(n-1);
    vector<string> ans;
    for(ll i = 0; i < ts.size(); i++){
        ans.push_back("0" + ts[i]);
    }

    for(ll i = ts.size()-1; i >= 0; i--){
        ans.push_back("1"+ts[i]);
    }

    return ans;
}

void solve(){
    ll n;
    cin>>n;
    vector<string> ans = gr(n);
    for(auto i : ans) cout<<i<<"\n";
}

int main(){
    solve();
    return 0;
}