#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
const int N = 100100;
using namespace std;
vector<ll>g[N];
int main()
{
    itsmdshahin;
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    //sort(a,a+n);
    ll a1=0,a2=0,g=0;
    for(int i=0; i<n; i++)
    {
        g += a[i];
        if(a[i]%2==0)
        {
            a1++;
        }
    }
    if(g%2==0)cout<<a1<<endl;
    else cout << n-a1 << endl;
}
