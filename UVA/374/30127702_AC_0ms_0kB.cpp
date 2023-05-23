#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define F first
#define S second
const int mx=1e7+9;
bool prime[1000000+7];
using namespace std;

int big(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while(b > 0){
         if(b&1){
              res = res * a %m;
         }
         a=a*a %m;
         b >>=1;
    }
    return res;
}
void fun1()
{
     ll n,p,m;
     while(cin >> n>>p>>m)cout << big(n,p,m) << endl;
}

int main()
{   shahin
    /*ll tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case " << i << ": ";
        fun1();
    //i++;
    }*/
    fun1();  
}