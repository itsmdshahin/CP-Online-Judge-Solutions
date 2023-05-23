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
const int N = 60;
int n,a[N];
using namespace std;
void fun()
{
     cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           int s;cin>>s;
           a[i]=max(a[i],s);
        }                   
     }
     for(int i=0;i<n;i++){
           if(a[i]==n-1){
                 a[i]=n;
                 break;
           }                
     }
     for(int i=0;i<n;i++)cout<<a[i]<<" ";
     cout<<"\n";
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
