// Codechef
// Author: simimakhijani
//

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'

using namespace std;

int a[100001];

void solve()
{
    // ll n, k;
    // cin >> n >> k;
    // string s;
    // cin >> s;
string Q;
   int n,k;
   cin >> n >> k >> Q;
   
   
   
   
   
   k--;Q="."+Q+".";
   string b=Q;
   for(int j=1;j<=n;++j) 
      if(Q[j]=='1') {
         b[j]='0';
         if(Q[j-1]=='0')b[j-1]='1';
         if(Q[j+1]=='0')b[j+1]='1';
      }
   Q=b.substr(1,n);
   for(int i=0,x=2147483647;i<n;++i,x++) {
      if(Q[i]=='1') x=0;
      a[i]=x;
   }
   for(int i=n,x=2147483647;i>=0;--i,x++) {
      if(Q[i]=='1') x=0;
      a[i]=min(a[i],x);
   }
   for(int i=0;i<n;++i) {
      if(k<a[i]) putchar('0');
      else putchar((k-a[i])%2==0?'1':'0');
   }
   putchar('\n');

    // string temp = s;

    // rep(i, k)
    // {
    //     rep(i, n)
    //     {
    //         if (s[i] == '1')
    //         {
    //             if (i > 0 && s[i - 1] == '0')
    //             {
    //                 temp[i - 1] = '1';
    //             }
    //             temp[i] = '0';
    //             if (i < n && s[i + 1] == '0')
    //             {
    //                 temp[i + 1] = '1';
    //             }
    //         }
    //     }
    //     s = temp;
    // }
    // cout << s << nl;
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}