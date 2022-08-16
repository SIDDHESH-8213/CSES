#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

 
void solve(){
	ll n, ans = 0;
	cin>>n;
	vector<ll> a(n);
	for(auto &i : a) cin>>i;
	for(ll i = 1; i < n; i++){
		if(a[i] < a[i-1]){
			ans += a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout<<ans<<"\n";
}
 
int main(){
	solve();
	return 0;
}