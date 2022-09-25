// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/EQPAIR

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--) {
	    ll n;
	    cin>>n;
	    ll temp;
	    map<ll, ll> mapp;
	    for(int i=0; i<n; i++) {
	        cin>>temp;
	        mapp[temp]++;
	    }
	    ll ans = 0;
	    for(auto it: mapp) {
	        temp = it.second;
	        if (temp >= 2) {
	            temp *= (temp-1);
	            ans += temp/2;
	        }
	    }
	    cout<<ans<<'\n';
	    
	}
	return 0;
}
