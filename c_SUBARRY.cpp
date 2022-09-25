// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/SUBARRY

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--) {
	    ll n;
	    cin>>n;
	    ll temp;
	    ll ansma;
	    ll ansmi;
	    ll mi = INT_MAX;
	    ll ma = INT_MIN;
	    for(ll i=0; i<n; i++) {
	        cin>>temp;
	        mi = min(mi, temp);
	        ma = max(ma, temp);
	    }
	    if (mi>=0 && ma>=0) {
	        ansmi = mi*mi;
	        ansma = ma*ma;
	    }
	    else if (mi<0 && ma<0) {
	        ansma = mi*mi;
	        ansmi = ma*ma;
	    }
	    else if (ma>=0 && mi<0) {
	        ansmi = mi*ma;
	        ansma = max(mi*mi,ma*ma);
	    }
	    
	    cout<<ansmi<<' '<<ansma<<'\n';
	}
	return 0;
}
