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
    if(a[0]+a[1]>a[n-1])cout << -1<< "\n";
    else cout << 1<<" "<< 2<<" "<< n << endl;

    }
}