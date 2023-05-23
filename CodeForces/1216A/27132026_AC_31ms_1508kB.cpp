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
    int n,x=0;string s;
    cin >>n >> s;
    
    for(int i=0;i<n;i+=2){
        if(s[i]=='a'&&s[i+1]=='a'){
            s[i+1]='b',x++;
        }
        else if(s[i]=='b'&&s[i+1]=='b'){
            s[i]='a', x++;
        }
    }
    cout << x <<endl;
    cout << s <<endl;
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
    }*/
    fun();
   
}
