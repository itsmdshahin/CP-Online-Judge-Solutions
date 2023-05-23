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
    for(ll i=4;i<=mx;i+=2)prime[i]=1;
    for(ll i=3;i<=n;i+=2){
         if(prime[i]==0){
              vec.pb(i);                 
              for(ll j=i*i;j<mx;j+=2*i){
                      prime[j]=1;              
              }                 
         }                 
    }
}

void fun(){
        ll n,cnt=0;
        while(cin>> n && n!=0){
              cnt=0;
              if(prime[n]==0){
                   cout << 0 << endl;
                   //break;
              }
              else{
                      ll x=0,y=0;   
                      // 10,9,8,7;
                      for(int i=n-1;i>=0;i--){
                          if(prime[i]==0){
                             x = i;
                             break;
                          }                  
                      }
                      // 10,11
                      for(int i=n;i<mx;i++){
                           if(prime[i]==0){
                             y = i;
                             break;
                          }                 
                      }
                      cout << y-x<<endl;
              }
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
