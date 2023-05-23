#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define F first
#define S second
const int mx=1e7+9;
bool prime[1000000+7];
using namespace std;

int main(){
     ll a,b,c,d;cin>>a>>b>>c>>d;
     ll mx1=0,mx2=0;
     mx1 = max(a*c,a*d);
     mx2 = max(b*c,b*d);
     cout << max(mx1,mx2)<<endl;
}
