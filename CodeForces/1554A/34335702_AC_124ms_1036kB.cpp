
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void funxx()
{
    ll n;cin >> n;
    vector <ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll mx=0;
    for(int i=0;i<n-1;i++){
        mx = max((a[i]*a[i+1]),mx);
    }
    cout << mx << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while(tc--)
    {
        funxx();
    }
}
