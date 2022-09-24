// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/SPEEDTEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    double spa = (double)a/x;
	    double spb = (double)b/y;
	    if (spa==spb) cout<<"Equal\n";
	    else if (spa>spb) cout<<"Alice\n";
	    else cout<<"Bob\n";
	}
	return 0;
}
