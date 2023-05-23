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

bool fun(int a, int b){
    return (a>b);
}
 
void fun()
{
    int a[26]={0}, sum=0;
    string s;cin >> s;
    for(int i=0;i<s.size();i++){
        a[(s[i]-'a')]=1;
    }
    for(int i=0;i<26;i++)sum+=a[i];
    if(sum%2==0)cout << "CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
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
