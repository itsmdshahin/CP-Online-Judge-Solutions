/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE: 28/Dec/2020            *
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
int ar[120][120];
using namespace std;
char wcz[nax];
int w[200],s1=0,s2=0;

bool fu(int a, int b){
    return (a>b);
}
int gcd(int x,int y){
    return x?gcd(y%x, x):y;
}

bool isprime(int x){
                for(int i=2;i<x;i++){
                                if(x%i==0){
                                return false;
                                }
                }
                return true;
}

void fun(){
    ll n,m;
    while(cin >> n >> m){
        if(n <= m)cout  << m-n << endl;
        else if(n > m)cout  << n-m << endl;
    }
}

int main()
{
    shahin
    /*ll tc,i=1,m=-100000,sum=0,A=0,B=-1000000;
    cin >> tc;
    while(tc--)
    {
    cout << "Case " << i << ": ";
        fun();
       i++;
    }
*/
    fun();
}
