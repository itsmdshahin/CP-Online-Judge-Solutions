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
bool dec(int a){
      while(a!=0){
            if(a%10==7)return true;
            a/=10;
      }
      return false;
}
bool oct(int a){
      while(a!=0){
           if(a%8==7)return true;
           
           a = a/8;
      }     
      return false;
}
int main(){
     int n,cnt=0;
     cin >> n;
     for(int i=1;i<=n;i++){
            if(dec(i)){
                 cnt++;                 
            }
            else if(oct(i)){
                  cnt++;                
            }
     }
     cout << n-cnt << endl;
        
}