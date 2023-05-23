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
          ll n,a=0,b=0;
          cin >> n;
          //ll ar[n];
          vector <ll> ar(n);
          for(int i=0;i<n;i++)cin >> ar[i];
          sort(ar.begin(), ar.end(), fu);
          for(int i=0;i<n;i++){
             if(a<=0){
                   a += ar[i];                
             }
             else a -= ar[i];
             //cout << a << " ";
           }
          if(a==0)cout<<"YES\n";
          else cout<<"NO\n";     
    }
}