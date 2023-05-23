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
    ll n,fr[26];
    for(int i=0;i<26;i++)fr[i]=0;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].size();j++){
            fr[s[i][j]-97]++;
        }
    }
    ll sum=0;
    for(int i=0;i<26;i++){
        if(fr[i]%n!=0){
            sum=1;
            break;
        }
    }
    if(sum==1)cout << "NO\n";
    else cout << "YES\n";
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
