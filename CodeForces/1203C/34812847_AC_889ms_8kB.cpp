#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> vec;
set <ll>st;
int main()
{
    ll n,g=0;cin >> n;
    for(ll i=0;i<n;i++){
        ll x;cin >> x;
        g = __gcd(g,x);
        //vec.push_back(x);
    }
    //cout << g << " ";
    ll ans=1,cnt=0;

    for(ll i=1;i*i<=g;i++){
        if(g%i==0){
            cnt++;
            if(i*i < g)cnt++;
            //cout <<g<<" "<<i<<" "<<(g%i)<<" "<<cnt <<" ";
        }
    }
    cout << cnt << endl;
}
