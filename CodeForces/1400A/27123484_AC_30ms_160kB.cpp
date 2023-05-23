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
 
const int mod = 1e9 + 7;

using namespace std;

bool fu(int a, int b){
    return (a>b);
}
 
void fun()
{
    int n;string s,sum;
    cin >> n >> s;
    for(int i=0;i<s.size();i+=2){
        sum+=s[i];
    }
    cout <<sum << "\n";
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
   // fun();
   
}
