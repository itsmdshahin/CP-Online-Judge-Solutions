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
char s[1234567], t[1234567];
void fun()
{
    cin>>s;
    ll a=0,b=0,c=0,d=0;
    for(int i=0;s[i];i++){
           if(t[a-1]==s[i] && a>0)a--;
           else t[a++] = s[i];
    }
    if(a)cout<<"No";
    else cout << "Yes";
    
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
