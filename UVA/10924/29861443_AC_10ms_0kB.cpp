#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
#define F first
#define S second
const int mx = 1e7 +1;
bool prime[mx];
  
using namespace std;
void fun1()
{
    prime[0]=1;
    prime[1]=0;
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
         string s;
         while(cin >>s){
         ll ans=0;
         for(int i=0;i<s.size();i++){
                 if(islower(s[i])){
                      ans += (s[i]-97)+1;
             //         cout << (s[i]-97)+1<< " ";
                 }
                 else{
                   ans += (s[i]-65)+27;
           //        cout << (s[i]-65)+27 << " ";
                 }
         }
         //cout << ans<<" ";
         if(prime[ans]==0)cout << "It is a prime word.\n"; 
         else cout <<"It is not a prime word.\n";
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
