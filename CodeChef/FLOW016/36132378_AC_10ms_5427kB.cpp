#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        ll gc = __gcd(a,b);
        ll lcm = (a*b)/gc;
        cout << gc << " " << lcm << endl;

    }
}
