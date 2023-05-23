#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
      ll n,gc=0,cnt=0;cin>>n;
      vector <ll> vec;
      for(ll i=0;i<n;i++){
        ll x;cin>>x;
        gc = __gcd(gc,x);
      }
      for(ll i=1;i*i<=gc;i++){
        if(gc%i==0){
            cnt++;
            if(i*i<gc)cnt++;
        }
      }
      cout << cnt << endl;
}
