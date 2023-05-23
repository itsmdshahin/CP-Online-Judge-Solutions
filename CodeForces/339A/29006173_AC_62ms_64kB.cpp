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
    cin >> s;
    for(int i=0;i<s.size();i+=2){
         t.push_back(s[i]);                 
    }
    sort(t.begin(),t.end());
    for(int i=0;i<t.size();i++){
         if(i==t.size()-1)cout<<t[i]<<"\n";
         else cout << t[i]<<"+";                 
    }
    
}
