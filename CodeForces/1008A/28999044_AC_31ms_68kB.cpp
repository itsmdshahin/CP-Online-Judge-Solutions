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
    string s1="bcdfghjklmpqrstvwxyz",s2="aeiou";
    
       string s;cin>>s;
       int flag=1;
       for(int i=0;i<s.size()-1;i++){
                if(s1.find(s[i])!= -1 && s2.find(s[i+1])== -1){
                       flag=0;
                } 
       }
       if(s1.find(s[s.size()-1])!=-1)flag=0;
       if(flag)cout<<"YES\n";
       else cout<<"NO\n";
}