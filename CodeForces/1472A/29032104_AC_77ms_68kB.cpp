#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
using namespace std;
bool fu(int a,int b){
                      return a>b;
}
int main() 
{ 
    ll t;cin>>t;
    while(t--){
       ll n,k,m,cnt=0,cnt1=1,cnt2=0;
       cin >> n >> k >> m;
       while(n%2==0 || k%2==0){
           
           if(n%2==0){
               n/=2;
               cnt1 *= 2;
           }
           
           if(k%2==0){                 
                k/=2;     
               cnt1 *= 2;             
           }
       }
       //cout << cnt1 << " "<<cnt2<<endl;
       //if(m==1)cout<<"YES\n";
       if(cnt1>=m){
                 cout << "YES\n";            
       }
       else cout << "NO\n";
    }
}