// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/EQUIVALENT

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

using namespace std;

void solve(vector<ll> &primes)
{
    ll a;
    ll b;
    cin >> a >> b;

    bool first = true;
    ll count1 = 0;
    ll count2 = 0;
    ll ptr = 0;

    ll i;
    while (a > 1 && b > 1)
    {
        i = primes[ptr++];
        if (a % i == 0 && b % i == 0)
        {
            if (first)
            {

                while (a % i == 0)
                {
                    count1++;
                    a /= i;
                }
                while (b % i == 0)
                {
                    count2++;
                    b /= i;
                }
                // lcm
                ll lcm = (count1 * count2) / __gcd(count1, count2);
                count1 = lcm / count1;
                count2 = lcm / count2;
                first = false;
            }
            else
            {
                ll c1 = 0, c2 = 0;
                while (a % i == 0)
                {
                    c1++;
                    a /= i;
                }
                while (b % i == 0)
                {
                    c2++;
                    b /= i;
                }
                if (c1 * count1 != c2 * count2)
                {
                    cn;
                    return;
                }
            }
        }
        else if (a % i == 0 || b % i == 0)
        {
            cn;
            return;
        }
    }
    if ((a == 1 && b != 1) || (b == 1 && a != 1))
    {
        cn;
    }
    else
        cy;
}

int main()
{
    IOS;

    ll N = 1e6+1;

    bool prime[N + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
 
    ll count = 0;
    for (int p = 2; p <= N; p++)
        if (prime[p])
            count++;
    vector<ll> primes(count);
    
    ll ptr = 0;
    for (int p = 2; p <= N; p++)
        if (prime[p]){
            primes[ptr++] = p;
        }

    int t;
    cin >> t;
    while (t--)
    {
        solve(primes);
    }

    return 0;
}