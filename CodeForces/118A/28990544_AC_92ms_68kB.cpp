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
           ll c=0,j=0;
           string s,s1,s2="aeiouyAEIOUY";
           getline(cin,s);
           transform(s.begin(), s.end(), s.begin(), ::tolower);
           for(int i=0;i<s.size();i++){
                    //if(s.find(s2[i])!=-1)c++;
                    if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='Y'||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y')c++;
                    else{ 
                        cout << "."<<s[i];
                    }
                    
           }
 }