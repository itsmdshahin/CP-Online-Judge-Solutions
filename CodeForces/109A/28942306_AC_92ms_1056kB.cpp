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
   ll n,j;
   cin >> n;
   for(int i=n/7;i>=0;--i){
       if(!((n-i*7)%4)){
           j = (n-i*7)/4;
           for(int k=1;k<=j;k++)cout<<"4";
           for(int k=1;k<=i;k++)cout<<"7";
           cout<<"\n";
           return 0;
       }                
   }
   cout << -1 << endl;
}

