#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define F first
#define S second
const int mx=1e7+9;
bool prime[1000000+7];
using namespace std;

int main(){
     shahin
     ll a,b,c,cnt=0,ans=1; 
     cin >> a >> b>>c;
     for(int i=min(a,b);i>=1;i--){
          if(cnt == c)break;
          if(a%i==0 && b%i==0 && cnt<c){
               cnt++;
               ans = i;
          }
     }
     cout << ans << endl;
}