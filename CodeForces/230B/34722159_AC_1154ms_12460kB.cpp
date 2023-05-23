#include <bits/stdc++.h>
#define ll long long
const int N = 1e6;
using namespace std;
bool prime[10000000+1];
set <ll> st;
void sei(){
    memset(prime,1,sizeof(prime));
    prime[0]=0;
    prime[1]=0;
    for(ll i=2;i*i<=1e12+1;i++){
        if(prime[i]){
            for(ll j=i*2;j*j<=1e12+1;j+=i){
                prime[j]=0;
            }
        }
    }
    for(ll i=2;i*i<1e12+1;i++){
        if(prime[i])st.insert(i*i);
    }
}

int main()
{
    sei();
     ll n;cin >> n;
     for(ll i=0;i<n;i++){
        ll x;cin >>x;
        if(st.find(x)!=st.end()){
            cout << "YES\n";
        }
        else cout << "NO\n";
     }
}
