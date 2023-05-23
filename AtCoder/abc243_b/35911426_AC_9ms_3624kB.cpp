#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    ll a[n],b[n],f=0,cnt=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            f++;
           // cout << i << "\n" << 2 << endl;
           // break;
        }
    }
  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         if(i!=j && a[i]==b[j]){cnt++;}
     }
  }
  cout << f<< '\n' << cnt << endl;

}