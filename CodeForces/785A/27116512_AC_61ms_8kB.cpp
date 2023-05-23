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
    int t,sum=0;cin >> t;
    while(t--){
    string s;
    cin >> s;
    if(s[0]=='I')sum+=20;
    else if(s[0]=='T')sum+=4;
    else if(s[0]=='C')sum+=6;
    else if(s[0]=='O')sum+=8;
    else if(s[0]=='D')sum+=12;
    }
    cout << sum << endl;
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
