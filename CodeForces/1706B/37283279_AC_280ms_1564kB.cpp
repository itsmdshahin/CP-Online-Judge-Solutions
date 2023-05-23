
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
        ll n;
        cin >> n;
        ll dp[2][n+5];
        for(int i=0; i<2; i++)
        {
            for(int j=1; j<=n; j++)
            {
                dp[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++)
        {
            ll x;
            cin >> x;
            dp[i & 1][x] = max( dp[i&1][x], dp[(i^1)&1][x]+1 );
        }
//        for(int i=0; i<2; i++)
//        {
//            for(int j=1; j<=n; j++)
//            {
//                cout << dp[i][j] << " ";
//            }
//            cout << endl;
//        }

        for(int j=1; j<=n; j++)
        {
            cout << (max( dp[0][j], dp[1][j] ))<<" ";
        }
        cout << endl;

    }
}

