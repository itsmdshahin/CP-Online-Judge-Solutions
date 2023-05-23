
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;


int main()
{
    ll t,z=1;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n;
        map <char,ll> mp;
        bool ok=0;
        for(ll i=0; i<n; i++)
        {
            char x;cin >>x;
            mp[x]++;
        }
        ll ans=0;
        for(auto i: mp){
            ans += (i.second)+1;
        }
        cout << ans << endl;
    }
}

