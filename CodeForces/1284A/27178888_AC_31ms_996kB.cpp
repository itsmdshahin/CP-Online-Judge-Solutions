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
    int n,m;
    string s[55],t[55];
	cin>>n>>m;
	for(int i=0;i<n;++i) cin>>s[i];
	for(int i=0;i<m;++i) cin>>t[i];
	int q,y;
	cin>>q;
	while(q--)
	{
		cin>>y; --y;
		cout<<s[y%n]<<t[y%m]<<"\n";
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
