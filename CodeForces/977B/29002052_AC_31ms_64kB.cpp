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
    int n,c=0,d=0,cnt=0;cin>>n;
    string s,t;cin>>s;
    //t=s;
    for(int i=0;i<n-1;i++){
           for(int j=0;j<n-1;j++){
                 if(s[i]==s[j]&&s[i+1]==s[j+1])c++;
                 if(c > d){
                     d = c;
                     t.clear();
                     t+=s[i];
                     t+=s[i+1];
                 }
           } 
           c=0;
    }
    cout << t << endl;
    
}
