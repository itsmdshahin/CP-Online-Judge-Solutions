
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

using namespace std;
void Prime_()
{
    prime[0]=1;
    prime[1]=0;
    for(ll i=4; i<=mx; i+=2)
    {
        prime[i]=1;
    }
    for(ll i=3; i<=sqrt(mx); i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i; j<mx; j+= i*2)
            {
                prime[j]=1;
            }
        }
        //prime[i]=1;
    }
}

int genFibonacci(int n)
{
    int fibo[n+2];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n];
}



void fun()
{
    int t;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        ll n,m;
        cin >> n >>m;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        cout << "Case "<<z<<": \n";
        for(int i=0; i<m; i++)
        {
            ll cnt=0,x,y;
            cin >> x >> y;
            ll minvalue = lower_bound(a, a+n, x)-a;
            ll maxvalue = upper_bound(a, a+n, y)-a;
            cout << maxvalue - minvalue << endl;
        }
        /*
        ll ans[m];
        for(int i=0;i<m;i++){
            ll cnt=0,x,y;cin >> x >> y;
            for(int j=0;j<n;j++){
                if(a[j]>=x && a[j]<=y){
                    cnt++;
                }
            }
            ans[i]=cnt;
            //cout << ans[i]<<endl;
        }
        cout << "Case "<<z<<": \n";
        for(int i=0;i<m;i++){
            cout << ans[i]<<endl;
        }
        */

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    /*
    ll n;
    cin >> n;
    while(n--)
    {
        solve();
    }*/
    fun();
}
