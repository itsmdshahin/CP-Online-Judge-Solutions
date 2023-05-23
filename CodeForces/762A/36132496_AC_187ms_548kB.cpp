#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    vector <ll> vec;
    ll n,m;cin>>n>>m;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            vec.pb(i);
            if(i!=n/i)vec.pb(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    //for(auto x:vec)cout << x << " ";
    if(vec.size()< m)cout << -1 << endl;
    else cout << vec[m-1] << endl;
}
