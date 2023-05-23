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
    prime[2]=0;
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
        ll n,m,cnt=0;
        cin >> n;
        if(n==0 || n==1)cnt=-1;
        else if(prime[n]==0){
            cnt=1;                  
        }
        else{
        // 10 9 8 |7| 6 |5| 4 |3| |2| 1                        
        for(int i=n;i>=0;i--){
            if(prime[i]==0){
                 n = n-i;
                 i = n;
                 cnt++;
                 if(n<=0)break;
            }                  
          }
        }
        cout << cnt << endl;
}
void fun1()
{
     int a,b,c,d;
     cin>>a >>b >> c >>d;
     int n = min(a, min(c,d));
     int m = min(b, a-n);
     cout << m*32+ n*256 << endl;
                      
}

int main()
{   shahin
    /*Prime_Ge();                 
    ll tc,i=1;
    cin >> tc;
    while(tc--)
    {
    cout << "Case " << i << ": ";
        fun();
    i++;
    } */
    fun1();  
}
