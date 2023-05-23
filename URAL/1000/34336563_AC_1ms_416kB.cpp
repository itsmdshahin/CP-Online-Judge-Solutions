
#include<bits/stdc++.h>

#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
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
    for(ll i=4;i<=mx;i+=2){
        prime[i]=1;
    }
    for(ll i=3;i<=sqrt(mx);i+=2){
        if(prime[i]==0){
            for(ll j=i*i;j<mx;j+= i*2){
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

int fun(ll a, ll b){
    return a+b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;cin >> n>>m;
    cout << fun(n,m) << endl;

}
