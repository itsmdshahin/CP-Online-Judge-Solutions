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
    vector <int> v;
    int n,x,y,z;
    cin >> n;
    for(int i=0;i<n;i++){
         cin >> x >> y >> z;
         if(x>20 || y>20 || z>20){
                               cout << "Case "<<i+1<<": bad\n";
         }
         else{
                               cout << "Case "<<i+1<<": good\n";
         }
         
    }
  
}
