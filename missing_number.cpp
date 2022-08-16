#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
// Gauss Algorithm
// Total sum = (n-1) terms sum + missing ele sum
 
void solve(){
	ll n;
	cin>>n;
	ll sum = n*(n+1)/2;
	ll ts = 0, temp;
	for(ll i = 1; i <= n-1; i++)
	{
		cin>>temp;
		ts += temp;
	}
 
	cout<<(sum - ts)<<"\n";
}
 
int main(){
	solve();
	return 0;
}