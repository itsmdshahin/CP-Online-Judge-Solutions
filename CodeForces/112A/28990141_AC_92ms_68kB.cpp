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
    string s,t;
    cin >>s>>t;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(),t.end(),t.begin(), ::tolower);
    if(s==t)cout<<"0\n";
    else if(s>t)cout<<"1\n";
    else cout<<"-1\n";
    return 0;
    
}