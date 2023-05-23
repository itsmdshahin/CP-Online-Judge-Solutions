
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 105;
vector <int> g[N];
int indgr[N],outdgr[N];

int BigMod(ll a,ll b, ll mod){
    a %= mod;
    ll res = 1;
    while(b>0){
        if( b&1 ){
            res = res * a % mod ;
        }
        a = a * a%mod;
        b >>=1;
    }
    return res;
}
int main()
{
    ll t;cin>>t;
    while(t--){
        ll a,b,m;cin >> a>> b >> m;
        cout << BigMod(a,b,m) << endl;
    }
}
