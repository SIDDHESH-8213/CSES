#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

void solve(){
	ll n;
	cin>>n;
	ll ans = 0;
	for(ll i = 5; n/i >= 1; i *= 5){
		ans += n/i;
	}
	cout<<ans<<"\n";
}

int main()
{
    solve();
    return 0;
}