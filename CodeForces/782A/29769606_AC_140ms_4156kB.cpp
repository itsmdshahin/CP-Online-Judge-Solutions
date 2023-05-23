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
void fun()
{
     map<int,int>M;
     int n;
     cin>>n;
     int a[n+n],mmx=0,s=0;
     for(int i=0;i<(n+n);i++){
          cin >> a[i];
          if(M[a[i]]==0){
              M[a[i]]++;
              s++;
              if(s>mmx)mmx = s;
          }
          else s--;
          
     }
     cout << mmx << endl;
     
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
