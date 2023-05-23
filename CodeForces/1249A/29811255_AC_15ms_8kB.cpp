#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
#define F first
#define S second

  
using namespace std;

void fun()
{
         ll n,m;cin>>n;
         ll a[n];
         for(int i=0;i<n;i++){
           cin >> a[i];                    
         }
         sort(a, a+n);
         ll ans=1;
         for(int i=1;i<n;i++){
               if(a[i]-a[i-1]==1){
                        ans=2;   
                        break;
               }                
         }
         cout << ans << endl;
}

int main()
{    
     shahin
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
