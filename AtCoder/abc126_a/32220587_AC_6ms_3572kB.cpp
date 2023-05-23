#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define MAX_SIZE 228228
#define F first
#define S second
ll N = 998244353;
const int mx=1e6+9;
bool prime[1000000+7];
using namespace std;
 
int main(){
     ll trestcase,m,ans=mx;cin>>trestcase>>m;
     string s; cin>>s;
     for(int i=0;i<trestcase;i++){
          if((i+1)==m){
               char x=::tolower(s[i]);
               cout<< x;
          }
          else cout << s[i];
     }
     cout << "\n";
     
}