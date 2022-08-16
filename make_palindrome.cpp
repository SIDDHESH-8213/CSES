#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

void solve(){
    string s;
    cin>>s;
    map<char, int> mp;
    for(auto i : s){
        mp[i]++;
    } 
    ll no_ods = 0;
    for(auto i : mp){
        if(i.second%2 == 1) no_ods++;
    }

    if(no_ods >= 2) cout<<"NO SOLUTION\n";

    vector<char> a;

    for(auto i : mp){
        if(i.second >= 2){
            for(ll j = 1; j <= i.second / 2; j++){
                a.push_back(i.first);
            }

            mp[i.first] = i.second - 2*(i.second/2);
        }
    }

    for(auto i : mp){
        if(i.second == 0) continue;
        else a.push_back(i.first);
    }

    

    for(auto i : a) cout<<i;
    if(s.length()%2 == 1)
        for(ll i = a.size() - 2; i >= 0; i--) cout<<a[i];
    else
        for(ll i = a.size() - 1; i >= 0; i--) cout<<a[i];
    cout<<"\n";
}

int main(){
    solve();
    return 0;
}