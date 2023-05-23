#include<bits/stdc++.h>
#define itsmdshahin		 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define LD		      long double
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
#define vl 			 vector<int64_t>
#define umi			 unordered_map<int,int>
#define uml               unordered_map<int64_t,int64_t>
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))

const ll INF=1e18;
const ll MOD_1=1e9+7;
const ll MOD_2=998244353;
const ll mod = 1e9+7;

using namespace std;
int main()
{
    itsmdshahin;
    //Prime_seive()
    ll n,m;cin >> n>>m;
    vector <ll> space(n);
    for(int i=0;i<n;i++)cin>>space[i];
    vector <pair<ll,ll> > base;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>> y;
        base.pb({x,y});
    }
    sort(base.begin(),base.end());
    vector<ll>power,gold;
    gold.pb(0);
    //power.pb(0);
    for(int i=0;i<base.size();i++){
        power.pb(base[i].first);
        gold.pb(base[i].second);
    }
    ll cum_sum[m+5];
    cum_sum[0] = 0;
    for(int i=1;i<=m;i++){
        cum_sum[i] = cum_sum[i-1]+gold[i];
    }
    for(int i=0;i<space.size();i++){
        ll k = upper_bound(power.begin(),power.end(),space[i])-power.begin();
        if(k>power.size()-1){
            cout << cum_sum[m] << " ";
        }
        else cout << cum_sum[k] <<" ";
    }
    cout << endl; 
} 
