/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE: 04/sep/2020            *
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
    string s;
	int n;
	cin>>n>>s;
	
	int x=0;
	for(int i=0;i<n;i++)if(s[i]=='1')x++;
	if(x+x==n){
		cout<<2<<endl;
		cout << s.substr(0,n-1) << " "<<s[n-1]<<endl;
	}
	else {
		cout<<1<<endl;
		cout<<s<<endl;
	}
    
}
int main()
{
    shahin
/*    int tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    } */
    fun();
   
}
