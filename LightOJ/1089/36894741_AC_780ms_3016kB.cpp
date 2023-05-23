
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long

using namespace std;


int main()
{
    itsmdshahin;
    ll t,z=1;cin>>t;
    while(t--){
         ll n,k;cin >> n>>k;
         vector<ll>a(n),b(n);
         for(int i=0;i<n;i++){
            ll l,r;cin>> l>>r;
            a.push_back(l);
            b.push_back(r);
         }
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());
         cout << "Case "<<z++<<": "<<endl;
         while(k--){
            ll ans=0,c;cin >>c;
            ll left = upper_bound(a.begin(),a.end(),c)- a.begin();
            ll right = upper_bound(b.begin(),b.end(),c-1)-b.begin();
            cout << left-right << endl;
         }
    }
}