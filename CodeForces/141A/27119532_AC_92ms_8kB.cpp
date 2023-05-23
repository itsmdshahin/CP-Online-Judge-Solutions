/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE: 01/sep/2020           *
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
 
const int mod = 1e9 + 7;

using namespace std;

bool fu(int a, int b){
    return (a>b);
}
 
void fun()
{
    string s,t,u;
    cin >> s >> t >> u;
    string a = s+t;
    sort(a.begin(),a.end());
    sort(u.begin(),u.end());
    if(a==u)cout << "YES\n";
    else cout << "NO\n";
}
 
int main()
{
    shahin
 /*   int t,i=1,sum=0;
    cin >> t;
    while(t--)
    {
    //cout << "Case #" << i << ": ";
        fun(sum);
    //i++;
    } */
    fun();
   
}
