// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1473/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}

void solve()
{
    string s,t;
          cin>>s>>t;
          ll g= __gcd(s.length(),t.length());
          if(check(s,t.length()/g)== check(t,s.length()/g))
          cout<<check(s,t.length()/g)<<endl;
          else
          cout<<-1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}