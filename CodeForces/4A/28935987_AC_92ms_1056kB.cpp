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
 
bool fu(int a, int b){
    return (a>b);
}
int main() 
{
     ll n,flag=0;
     cin >> n;
     for(int i=1;i<=n;i++){
                          for(int j=1;j<=n;j++){
                     if(i+j==n && i%2==0 && j%2==0){
                                           flag=1;
                                           
                     }
          } 
     }
     if(flag==1)cout << "Yes\n";
     else cout << "No\n";
}
