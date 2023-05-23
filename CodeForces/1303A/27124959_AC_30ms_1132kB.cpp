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
    int c=0,i,j;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)if(s[i]=='1')break;
    for(j=s.size()-1;j>=0;j--)if(s[j]=='1')break;
    i++,j--;
    for(;i<=j;i++)if(s[i]=='0')c++;
    cout << c << "\n";
}
int main()
{
    shahin
    int t,i=1,sum=0;
    cin >> t;
    while(t--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    }
    //fun();
   
}
