#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
using namespace std;
bool fu(int a,int b){
                      return a>b;
}
int main()
{
         
         int n;
         while(1){
         vector <int> a;
         cin >> n;
         if (!n)break;
         for(int i=1;i<=n;i++)a.push_back(i);
         cout << "Discarded cards:";
         while(a.size() >= 2){
               int x = a.front();
               a.erase(a.begin());
               cout << " "<< x;
               if(a.size()!=1){
                  cout << ",";                   
               }
               int y = a.front();
               a.push_back(y);
               a.erase(a.begin());
         }
         cout << "\nRemaining card: "<< a.front() << endl;
         }
         
}
    