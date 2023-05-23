/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE: 02/sep/2020           *
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
    string s;
    cin >> s;
    int len= s.size();
    //for(int i=0;i<len;i++){
    if(len>10){
        cout << s[0]<<len-2<<s[len-1]<<endl;
    }
    else{
        cout << s <<endl;
    }
    //}
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
   
}
