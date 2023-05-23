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
    int s1=0,s2=0;
    string s;cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]>= 'a'&&s[i]<='z')s1++;
        if(s[i]>= 'A'&&s[i]<='Z')s2++;
    }
    if(s1>=s2){
        for(int i=0;i<s.size();i++){
                s[i] = tolower(s[i]);
            }
        cout << s << endl;
        
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
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
