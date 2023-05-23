
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> vec;
set <ll>st;
int main()
{
    ll n=1501;
    //vec.push_back(1);
    ll dp[n]; dp[0]=1;
    ll p2=1,p3=1,p5=1;
    for(int i=1;i<=n;i++){
        ll f2= 2*dp[p2];
        ll f3= 3*dp[p3];
        ll f5= 5*dp[p5];
    //    cout << f2 << " " << f3 << " "<<f5<<endl;
        ll minn = min(f2, min(f3,f5));
        dp[i] = minn;
        //vec.push_back(minn);
        if(minn == f2)p2++;
        if(minn == f3)p3++;
        if(minn == f5)p5++;
    }
    cout <<"The 1500'th ugly number is 859963392." << '\n';
    //for(auto it:dp)cout << it << " ";
}
