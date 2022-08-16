#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const ll mod = 1e9+7;
ll power(ll n, ll k){
	ll ts = n;
	ll v = 1;
	if(k == 0) return 1;
	for(ll i = 1; i <= k; i++){
		v = ((v%mod)*(ts%mod))%mod;
	}
 
	return (v%mod);
}
 
void solve(){
	ll n;
	cin>>n;
	cout<<power(2, n)<<"\n";
}
 
int main()
{
    solve();
    return 0;
}