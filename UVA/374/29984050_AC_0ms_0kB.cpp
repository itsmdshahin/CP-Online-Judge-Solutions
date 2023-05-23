#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define F first
#define S second
const int mx=20000000+10;
bool prime[mx];
ll a[mx];
using namespace std;
vector <int> vec;
ll m;
int  F(ll n, ll p){
       if(p==0)return 1;
       else if(p%2==0){
            ll res = F(n, p/2);
            return ((res%m)*(res%m))%m;
       }
       else{
           return ((n%m)*(F(n,p-1)%m))%m;                 
       }
}
void fun1()
{
    ll n,p;
    while(cin >> n >> p >> m){
    cout << F(n,p) << endl;
    }
    
}
int main()
{   shahin
    /*//Prime_Ge();                 
    ll tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case " << i << ": ";
        fun1();
    //i++;
    }*/
    fun1();  
}
