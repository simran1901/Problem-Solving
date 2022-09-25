// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/BOBBANK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int w, x,y,z;
	cin>>w>>x>>y>>z;
	int ans = w + z*(x-y);
	cout<<ans<<'\n';}
	return 0;
}
