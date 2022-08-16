#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

void solve(){
    string s;
    cin>>s;
    vector<string> st;
    sort(s.begin(), s.end());
    do{
        st.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    cout<<st.size()<<"\n";
    for(auto i : st) cout<<i<<"\n";
    
}

int main(){
    solve();
    return 0;
}