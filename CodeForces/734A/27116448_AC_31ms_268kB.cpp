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
 
const int mod = 1e9 + 7;

using namespace std;

bool fu(int a, int b){
    return (a>b);
}
 
void fun()
{
    ll n,A=0,D=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D')D++;
        else if(s[i]=='A')A++;
    }
    if(A > D)cout << "Anton\n";
    else if(A < D)cout << "Danik\n";
    else cout << "Friendship\n";
}
 
int main()
{
    shahin
/*    int t,i=1;
    cin >> t;
    while(t--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    } */
    fun();
   
}
