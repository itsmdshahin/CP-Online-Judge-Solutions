#include<bits\stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin >> n >> m;
    cout << "YES" << endl;
    for(ll i=n; i<=m; i+=2)
    {
        cout << i << " " << i+1 << '\n';
    }
}
