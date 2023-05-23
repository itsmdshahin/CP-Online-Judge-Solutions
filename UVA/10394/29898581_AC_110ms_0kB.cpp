#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
#define F first
#define S second
const int mx=20000000+10;
bool prime[mx];
ll a[mx];
using namespace std;
vector <int> vec;

void Prime_Ge(){
    ll n = sqrt(mx);
    prime[1]=1;
    prime[2]=1;
    for(ll i=4;i<=mx;i+=2)prime[i]=1;
    for(ll i=3;i<=n;i+=2){
         if(prime[i]==0){
              //vec.pb(i);                 
              for(ll j=i*i;j<mx;j+=2*i){
                      prime[j]=1;              
              }                 
         }                 
    }
}

void fun(){
    ll n,cnt=1;
    //vector <int> ar;
    for(ll i=2;i<=mx;i++){
           if(prime[i]==0 && prime[i+2]==0){
                a[cnt++]=i;
               // ar.pb(i);
           }
    }
    while(cin >> n){
         cout << "("<<a[n]<<", "<<a[n]+2<<")"<<endl;
    }
}
int main()
{   shahin
    Prime_Ge();                 
    /*fun1();
    ll tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    } */
    fun();  
}
