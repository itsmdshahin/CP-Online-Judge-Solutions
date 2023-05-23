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
char wcz[nax];
int w[200],s1=0,s2=0;
typedef long long lll;
lll sum;
bool fu(int a, int b){
    return (a>b);
}
bool b[256];
int main()
{
   ll n;cin>>n;
   vector <ll> a(n);
   for(int i=0;i<n;i++){
          cin >> a[i];
   }
   sort(a.begin(),a.end());
   ll s1=0,s2=0,s3=0,s4=0,t1=0,t2=0;
   for(int i=0;i<n;i++){
          if(a[i]==4)s4++;
          else if(a[i]==3)s3++;
          else if(a[i]==2)s2++;
          else s1++;
   }
   t1 += s4;
   while(s3 >= s1 && s1!=0 || s3<s1 && s3!=0){
           t1+=1;
           s3--;
           s1--;
   }
   t1 += s3;
   //cout << t1 << endl;
   if(s2%2){
       t1 += s2/2;
       s2 = s2 - 2*(s2/2);
   }
  // cout << t1<<" ";
 
   if(s2!=0 || s1!=0){
            ll x=0;
            x += s2*2;
            x += s1;
            t1 += x/4;
            if(x%4!=0){
             t1+= 1;
            }
   }
 
   cout << t1 ;
}
 