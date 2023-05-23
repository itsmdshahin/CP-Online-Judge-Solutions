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
    string a,b,c;cin >> a >> b >> c;
    if(a[a.size()-1]==b[0] && b[b.size()-1]==c[0]){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int main()
{
    FUN();
}
