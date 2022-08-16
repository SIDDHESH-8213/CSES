#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

 
void solve(){
	ll x, y;
	cin>>x>>y;
 
	if(x <= y){
		if(y%2 == 1){
			cout<<(y*y - x + 1)<<"\n";
		}
		else{
			ll temp = (y-1)*(y-1) + 1;
			cout<<(temp + x - 1)<<"\n";
 
		}
	}
	
	else{
		if(x%2 == 0){
			cout<<(x*x - y + 1)<<"\n";
		}
		else{
			ll temp = (x-1)*(x-1) + 1;
			cout<<(temp + y - 1)<<"\n";
		}
	}
}
 
int main(){
	ll tc;
	cin>>tc;
	while(tc--) solve();
	return 0;
}