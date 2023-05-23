#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector <ll> a;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            sum += x;
        }
        if(sum%3==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
