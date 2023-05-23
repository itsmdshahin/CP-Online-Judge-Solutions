/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE: 03/sep/2020           *
* DEPT. OF CSE                 *
* LEADING UNIVERSITY, SYLHET   *
*******************************/
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

using namespace std;
char wcz[nax];

bool fu(int a, int b){
    return (a>b);
}
 
void fun()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    bool x=0;
    int len = s.size();
    for(int i=0;i<len-1;i++)if(s[i+1]-s[i]!=1)x=1;
    if(!x)cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    shahin
    int t,i=1;
    cin >> t;
    while(t--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    }
    //fun();
   
}
