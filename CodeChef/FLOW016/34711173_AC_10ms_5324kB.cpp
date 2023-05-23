#include <bits/stdc++.h>
#define ll long long
#include<cmath>
bool prime[10000000+1];
auto clc = clock();
using namespace std;
set <ll> st;
int a[104];

int main(){

     ll n;cin >> n;
     for(int i=0;i<n;i++){
        ll a,b;cin >> a >> b;
        ll gcd1 = __gcd(a,b);
        ll lcmm = (a*b)/gcd1;
        cout << gcd1 << " "<< lcmm << '\n';
     }
}
