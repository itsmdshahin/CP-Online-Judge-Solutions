
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;


int main()
{
    itsmdshahin;

    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    ll ans = INT_MAX;
    for(int i=(1<<(n-1))-1; i>=0; i--)
    {
        ll get = 0;
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j))get += a[j];
            else get -= a[j];
        }
        ans = min(ans,abs(get));
    }
    cout << ans << endl;
}

