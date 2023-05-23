#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define MAX_SIZE 228228
#define F first
#define S second
const int mx=1e7+9;
bool prime[1000000+7];
using namespace std;

int main(){
     shahin
     ll n;cin>>n;
     vector<ll>a(n);
     for(auto &get: a)cin>>get;
     ll Mx = *max_element(a.begin(),a.end());
     ll mm = *min_element(a.begin(),a.end());
     cout << Mx-mm<<endl;
     return 0;
} 