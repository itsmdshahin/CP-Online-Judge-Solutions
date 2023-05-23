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
     string s1,s2="Hajj",s3="Umrah";
     int i=1;
     while(cin >> s1)
     {
           if(s1[0]=='H'){
                      cout <<"Case "<<i << ": " <<"Hajj-e-Akbar\n";
                      i++;
           }
           else if(s1[0]=='U'){
                      cout <<"Case "<<i << ": " <<"Hajj-e-Asghar\n";       
                      i++;
           }
           if(s1[0]=='*')break;
     }
}
