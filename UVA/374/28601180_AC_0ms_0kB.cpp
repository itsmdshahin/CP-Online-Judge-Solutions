#include<bits/stdc++.h>
#define ll long long
const long mod = 1e9 +7;
using namespace std;
long long Bigmod(ll a, ll b, ll c){
    a = a%c;
    ll res = 1;
    while(b>0){
        if(b%2!=0){
            res = res * a % c;
        }
        a = a * a % c;
        b = b/2;
    }
    return res;
}

int main(){
    long long int a,b,c;
    while(cin >> a >> b >> c){
        cout << Bigmod(a,b,c)<< endl;
    }
}
