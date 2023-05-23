#include<bits/stdc++.h>
#include<vector>
#include<cstdio>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
const long mx=1e8;
bool prime[mx];
using namespace std;
int dp[10000];
#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL pow_mod(LL a,LL b,LL m)
{
 LL x=1,y=a;
 while(b>0)
 {
  if(b & 1)
   x=(x*y)%m;
  y=(y*y)%m;
  b>>=1;
 }
 return x;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  LL n,p,i,result=-1,temp;
  scanf("%lld%lld",&n,&p);
  if(n>=p)
  {
   printf("0\n");
   continue;
  }
  for(i=n+1;i<p;i++)
  {
   temp=pow_mod(i,p-2,p);
   result=(result*temp)%p;
  }
  printf("%lld\n",p+result);
 }
 return 0;
}