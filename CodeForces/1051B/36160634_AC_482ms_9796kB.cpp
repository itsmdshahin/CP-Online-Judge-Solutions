#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
bool prime[10000000+1];
set <ll> st;
void Prime_seive(){
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
    //Prime_seive();
    ll n,m;cin >> n>>m;
    cout << "YES\n";
    for(ll i=n;i<=m;i+=2){
        cout << i<<" " << i+1 << endl;
    }

}
