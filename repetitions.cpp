#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

 
void solve(){
	string s;
	cin>>s;
	ll temp = 1, maxy = 1;
	for(ll i = 0; i < s.length()-1; i++){
		if(s[i] == s[i+1]){
			temp++;
		}
 
		else{
			maxy = max(maxy, temp);
			temp = 1;
			//cout<<maxy<<"\n";
		}
	}
 
	maxy = max(temp, maxy);
	cout<<maxy<<"\n";
}
 
int main(){
	solve();
	return 0;
}