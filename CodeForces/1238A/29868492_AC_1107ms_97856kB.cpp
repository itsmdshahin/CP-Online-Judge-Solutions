#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
#define F first
#define S second
const int mx = 1e8;
bool prime[mx];
using namespace std;

void fun1()
{
    prime[1]=1;
    for(ll i=4;i<=mx;i+=2){
        prime[i]=1;
    }
    for(ll i=3;i<=sqrt(mx);i+=2){
        if(prime[i]==0){
            for(ll j=i*i;j<mx;j+= i*2){
                prime[j]=1;
            }
        }
        //prime[i]=1;
    }
}

void fun()
{
         ll n,m;cin >>n>>m;
         ll z = n-m;
         if(z==1)cout<<"NO\n";
         else cout<<"YES\n";
        
}

int main()
{    
    shahin
    fun1();
    int tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    } 
    //fun();  
}
