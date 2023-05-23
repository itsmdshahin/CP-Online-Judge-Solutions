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
char s[105];
using namespace std;

bool fu(int a,int b){
                      return a>b;
}

int main() 
{ 
    int n,cnt=0;
    int q[3]={};
    string t,c="aeiou";
    for(int i=0;i<3;i++){
         gets(s);
         for(int j=0;s[j];j++){
               if(c.find(s[j])!=-1){
                          q[i]++;           
               }                
         }             
    }
    if(q[0]==5&&q[1]==7&&q[2]==5){
                puts("YES\n");          
    }
    else puts("NO");
}
