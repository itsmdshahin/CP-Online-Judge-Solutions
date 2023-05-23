#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
using namespace std;
int main(){
    shahin
ll t;
cin >> t;
while(t--){
    ll n,sum=0;
    cin >> n;
    vector<ll > a(n);
    for(int j=0;j<n;j++){
    cin >> a[j];
    }
    for(int j=0;j<n-1;j++){
    sum += max(a[j]-a[j+1], (long long)0);
    }
    cout << sum << endl;

    }
}