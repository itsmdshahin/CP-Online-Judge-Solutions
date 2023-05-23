#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
#define F first
#define S second
const int mx = 1e6 +10;
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
         fun1();                      
         ll n;
         while(cin >>n && n!=0){
         string s = to_string(n);
         reverse(s.begin(),s.end());
         ll a = stoll(s);
         if(prime[n]==0){
              if(prime[a]==0 && n!=a)cout <<n<<" is emirp.\n";          
              else cout <<n <<  " is prime.\n";              
         }
         else cout << n <<" is not prime.\n";
         }
}


int main()
{    
     shahin
    /*int tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    } */
    fun();  
}
