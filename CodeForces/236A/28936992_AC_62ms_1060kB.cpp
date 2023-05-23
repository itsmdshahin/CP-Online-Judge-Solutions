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
     int c=0;                 
     string s;
     cin >> s;
     sort(s.begin(),s.end());
     for(int i=0;i<s.size();i++){
           if(s[i]==s[i+1])continue;
           else c++;
     }
     if(c%2==0)cout <<"CHAT WITH HER!\n";
     else cout << "IGNORE HIM!\n";
}
