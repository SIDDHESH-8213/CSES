#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

void solve(){
	ll n;
	cin>>n;
	if(n <= 3 && n > 1) cout<<"NO SOLUTION\n";
	else{
		ll k = 2;
		while(k <= n){
			cout<<k<<" ";
			k += 2;
		}
 
		k = 1;
		while(k <= n){
			cout<<k<<" ";
			k += 2;
		}
 
		cout<<"\n";
	}
}
 
int main(){
	solve();
	return 0;
}