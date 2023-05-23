#include<bits/stdc++.h>
using i64 = long long;
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
constexpr int L = 600;
#define F first
#define S second
const int mx = 1e7 +1;
bool prime[mx];
ll MX = 1e9;
ll dp[2021][2021];
using namespace std;

void FUN()
{
    ll n,m,k;cin >> n >> m >> k;
    if(n==m)cout << k << endl;
    else if(n==k)cout << m << endl;
    else if(m==k)cout << n << endl;

}

int main()
{
    FUN();
}
