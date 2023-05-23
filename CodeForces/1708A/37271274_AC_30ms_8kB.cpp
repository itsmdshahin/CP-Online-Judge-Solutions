
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
        vector <ll> a(n);
        bool ok=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(i!=0){
                if(a[i]%a[0]!=0){
                    ok=1;
                }
            }
        }
        if(ok){
            cout <<"NO\n";
        }
        else cout<<"YES\n";
    }
}

