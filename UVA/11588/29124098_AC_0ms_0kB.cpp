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


int main() {
    int t,cn=0;cin>>t;
    while(t--){
                          cn++;
          int a,b,c,d;
          cin >>a >>b >> c >> d;
          int total = a*b,frq[26];
          for(int i=0;i<26;i++)frq[i]=0;
          for(int i=0;i< total;i++){
                      char c;cin >>c;
                      if(c!='\n'){
                         frq[c-'A']++;                                
                      }
                      else{
                         i--;                   
                      }
          }
          int mmx= -1;
          for(int i=0;i<26;i++){
                                if(frq[i] > mmx){
                                    mmx = frq[i];                  
                                }
          }
          int maxCount = 0;
	for(int i = 0; i < 26; i++){
	   if(frq[i] == mmx)
	       maxCount++;
	}
	int ans = mmx * maxCount * c + (total - mmx * maxCount) * d;
	printf("Case %d: %d\n", cn, ans);
    }
    return 0;
}