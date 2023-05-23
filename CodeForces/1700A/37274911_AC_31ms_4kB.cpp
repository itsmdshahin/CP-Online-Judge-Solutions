
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n>>m;
        ll a[n][m],z=1;

        ll ans=0,last=m;
        for(ll i=1; i<=m; i++)
        {
            ans += i;
        }
        for(ll i=2; i<=n; i++)
        {
            ans += i*last;
        }
        cout << ans << endl;


    }
}

