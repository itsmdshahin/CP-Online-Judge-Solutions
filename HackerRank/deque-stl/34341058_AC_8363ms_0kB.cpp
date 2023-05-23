
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

void fun(){
    ll tc;cin>>tc;
    while(tc--){
        ll n,k;cin>>n>>k;
        ll a[n];
        deque<ll> De;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            while(!De.empty() && a[De.back()]<a[i]){
                De.pop_back();
            }
            while(!De.empty() && De.front()<= i-k){
                De.pop_front();
            }
            De.push_back(i);

            if(i>=k-1){
                cout << a[De.front()]<<" ";
            }
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fun();
}
