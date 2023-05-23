#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define LD				  long double
#define pb                push_back
#define p_b               pop_back
#define all(x)            (x).begin(),(x).end()
#define rev(x)            (x).rbegin(),(x).rend()
#define sz(x)             (int)((x).size())
#define len(x)            x.length()
#define fir               first
#define sec               second
#define pii               pair<int,int>
#define pll               pair<int64_t,int64_t>
#define vi                vector<int>
#define vl 				  vector<int64_t>
#define umi			      unordered_map<int,int>
#define uml               unordered_map<int64_t,int64_t>
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))

const ll INF=1e18;
const ll MOD_1=1e9+7;
const ll MOD_2=998244353;
const ll mod = 1e9+7;
using namespace std;
bool prime[10000000+1];
set <ll> st;
void Prime_seive()
{
    memset(prime,1,sizeof(prime));
    prime[0]=0;
    prime[1]=0;
    for(ll i=2; i*i<=1e12+1; i++)
    {
        if(prime[i])
        {
            for(ll j=i*2; j*j<=1e12+1; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(ll i=2; i*i<1e12+1; i++)
    {
        if(prime[i])st.insert(i*i);
    }
}
bool isPrime(ll n)
{
    if(n<2)return 0;
    for(int i=2; i<n; i++)if(n%i==0)return 0;

    return 1;
}
int main()
{
    itsmdshahin;
    //Prime_seive()
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin >> n;
        set <ll> set1;
        for(auto i=0;i<n;i++){
            ll c;cin >>c;
            set1.insert(c);
        }
        cout << set1.size() << endl;

    }
}
