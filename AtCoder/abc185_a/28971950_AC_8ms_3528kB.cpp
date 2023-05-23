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
char wcz[nax];
int w[200],s1=0,s2=0;
typedef long long lll;
lll sum;
bool fu(int a, int b){
    return (a>b);
}
bool b[256];
#include <iostream>

using namespace std;

int ma() {
      int t,n,k,d;
      cin >> t;
      while(t--){
          int sum =0,c=0;                  
          cin >> n >> k >> d;
          int a[n];
          for(int i=0;i<n;i++){
                cin >> a[i];
                sum += a[i];
          }
          if(sum < k)cout << 0 << endl;
          else{
                for(int i=1;i<=d;i++){
                                      
                }                 
          }
          
      }
      return 0;
}
int main(){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a < b && a < c && a < d){
                      cout << a << endl;        
        }
        else if(b < a && b < c && b < d){
                              cout << b << endl;
        }
        else if(c < a && c < b && c < d)cout << c << endl;
        else cout << d << endl;
}