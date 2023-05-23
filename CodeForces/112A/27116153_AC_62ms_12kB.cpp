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
    int i,j;
    string s,t;
    vector <string > vec;
    cin >> s >> t;
    for(i=0,j=0;i<s.size();i++,j++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }
    if(s==t)cout <<0<<endl;
    else{
        vec.pb(s);
        vec.pb(t);
        sort(vec.begin(),vec.end());
        if(vec[0]==s)cout <<-1<<endl;
        else cout << 1 << endl;
    }
    
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
