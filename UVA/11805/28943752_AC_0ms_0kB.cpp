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
int main() 
{
   int t,i=1;
   cin >> t;
   while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int s,t;
        s = b+c;
        if(s%a==0){
             cout << "Case "<< i << ": " << a<<endl;                 
        }
        else cout << "Case "<< i << ": " << s%a <<endl;
        
        i++;
   }
                     
}

