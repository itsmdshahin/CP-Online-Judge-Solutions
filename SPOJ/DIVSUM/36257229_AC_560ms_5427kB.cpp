#include<bits/stdc++.h>
#define ll long long
const int N = 1e6;
using namespace std;

int main()
{

    ll t;cin>>t;
    while(t--){
            ll sum=0,n;cin>>n;
            for(ll i=1;i*i<=n;i++){
                if(n%i==0){
                    sum+=i;
                    //cout << sum << " ";
                    if(i!=(n/i))sum += (n/i);
                    //cout << sum << endl;
                }
            }
            cout << sum-n << endl;
    }
}
