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
const int N = 60;
int n,a[N];
using namespace std;
void fun()
{
     char s[10000],t[10000];
     string s1,s2;cin >> s1 >> s2;
    /* 
     int len=s1.size(),len2=s2.size();
     
     for(int i=0;i<len;i++){
           s[i+1]= s1[i];                
     }
     for(int i=0;i<len2;i++){
           t[i+1]= s2[i];                
     }
     int dp[len+1][len2+1];
     for(int i=0;i<len;i++){
        for(int j=0;j<len2;i++){                   
          dp[i][j]=0;            
        }
     }
     for(int i=1;i<=len;i++){
        for(int j=1;j<=len2;j++){
         if(s[i]==t[j]){
                   dp[i][j] = 1 + dp[i-1][j-1];                  
         }
         else{
                   dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
         }  
        }                   
     }
     cout << dp[len][len2];
     */
     if(s1==s2)cout << -1 << endl;
     else if(s1.size()>s2.size())cout << s1.size();
     else cout << s2.size();
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
