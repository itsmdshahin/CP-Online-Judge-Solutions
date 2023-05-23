#include<bits/stdc++.h>

const long long mod = 1e9+7;
#define ll long long
using namespace std;
long long Bigmod(ll a, ll b){
    a %= mod;
    ll res=1;
    while(b>0){
        if(b%2!=0){
            res = res * a % mod;
        }
        a = a*a%mod;
        b/=2;
    }
    return res;
}
bool isprime(int x){
                for(int i=2;i<=sqrt(x);i++){
                                if(x%i==0){
                                return false;
                                }
                }
                return true;
}

//n^a*(n/2)^a%mod
int main(){
    int t;
    cin>> t;
    while(t--){
     int a;
     cin >> a;
     for(int i=1;i<=a;i++){
        if((isprime(i))==true){
            cout << i << "\n";
        }
     }
     cout << "\n";
     //ll s = Bigmod(a,b);
     //cout << s << endl;
    }
}
