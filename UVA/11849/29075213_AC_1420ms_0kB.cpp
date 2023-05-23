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
                      int n,m,x,ans=0,cnt=0;
                      map <int,int> Map;
                      map <int,int>::iterator it;
                      while(cin >> n >> m && n!=0 && m!=0){
                               ans=0;
                               while(n--){
                                     cin >> x;
                                     Map[x]++;
                               }
                               while(m--){
                                    cin >> x;
                                    Map[x]++;
                               }
                               /*for(it=Map.begin();it!=Map.end();it++){
                                      if(it->second==2)ans++;               
                               }*/
                               for(auto [x,y]: Map){
                                         if(y==2)ans++;            
                               }
                               Map.clear();
                               cout << ans << endl;
                      }
                      
                      
}