#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include <stdint.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
//typedef long long ll;
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
#define F first
#define S second

using namespace std;

void fun()
{
    int a[26]={0};
   string s;cin >> s;
   for(int i=0;i<s.size();i++){
       a[(s[i]-'a')]=1;
   }
   int ans=0;
   for(int i=0;i<26;i++)ans+=a[i];
   if(ans%2 == 0) cout << "CHAT WITH HER!\n";
   else cout << "IGNORE HIM!\n";
}
int main()
{    
     shahin
   /* int tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    }*/ 
    fun();  
}
