#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include <stdint.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
//typedef long long ll;
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
#define F first
#define S second

using namespace std;
char s[1234567], t[1234567];
void fun()
{
     int n;
         while(1){
         vector <int> a;
         cin >> n;
         if (!n)break;
         for(int i=1;i<=n;i++)a.pb(i);
         cout << "Discarded cards:";
         while(a.size() >= 2){
               int x = a.front();
               a.erase(a.begin());
               cout << " "<< x;
               if(a.size()!=1){
                  cout << ",";                   
               }
               int y = a.front();
               a.pb(y);
               a.erase(a.begin());
         }
         cout << "\nRemaining card: "<< a.front() << endl;
         }
}
int main()
{    
     shahin
   /* int tc,i=1;
    cin >> tc;
    while(tc--)
    {
    //cout << "Case #" << i << ": ";
        fun();
    //i++;
    }*/ 
    fun();  
}