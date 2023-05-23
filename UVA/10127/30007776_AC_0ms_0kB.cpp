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

void fun1()
{
    ll n;
    while(cin >> n){
        int cnt=1,c=1;
        while(c%n!=0)c = (c*10+1)%n, cnt++;
        
        cout << cnt<< endl;
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
