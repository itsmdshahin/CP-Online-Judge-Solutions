
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
        ll n,m;cin >> n >> m;
        string s(m, 'B');
        while(n--){
            ll x;cin >> x;
            x--;
            x = min(x,m-x-1);
            if(s[x]=='B')s[x]='A';
            else s[m-x-1]='A';
        }
        cout << s << endl;
    }
}

