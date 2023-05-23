
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
const long mx=1e8 + 7;
bool prime[mx];
using namespace std;
int w[200],s1=0,s2=0;

bool isprime(ll x){
                for(ll i=2;i<=sqrt(x);i++){
                                if(x%i==0){
                                return false;
                                }
                }
                return true;
}
vector <ll> vec;
void si(){
    prime[0]=1;
    prime[1]=1;
    for(ll i=4;i<=mx;i+=2){
        prime[i]=1;
    }
    for(ll i=3;i<=sqrt(mx);i+=2){
            if(prime[i]==0){
                for(ll j= i*i;j<=mx;j+=2*i){
                    prime[j]=1;
                }
            }
    }
    for(ll i=2;i<=mx;i++){
        if(prime[i]==0){
            vec.pb(i);
        }
    }
}

int main()
{
    shahin
    si();
    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        cout << vec[n-1] <<endl;
    }
}
