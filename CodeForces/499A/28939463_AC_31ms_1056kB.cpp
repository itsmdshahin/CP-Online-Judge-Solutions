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
    ll n,m,sum=0,j=1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            while(j + m <= a){
                      j += m; 
                      //cout << j << " ";
            }
           // cout << "\n";
            sum += (b-j+1);
            j = b+1;
           // cout << sum <<" "<< j << endl;
    }
    cout << sum << endl;
}

