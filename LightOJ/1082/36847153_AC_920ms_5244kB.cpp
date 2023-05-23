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
ll a[1000009],tree[4*1000009];

void built(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node]=a[s];
        return;
    }
    ll left = node*2+1;
    ll right = node*2+2;
    ll mid = (s+e)/2;
    built(left, s, mid);
    built(right, mid+1,e);
    tree[node] = min(tree[left],tree[right]);
}
int query(ll node,ll s,ll e,ll i, ll j)
{
    if( i > e ||  j < s)
    {
        return 1e18;
    }
    if(s>=i && e<=j)
    {
        return tree[node];
    }
    ll left = node*2+1;
    ll right = node*2+2;
    ll mid = (s+e)/2;
    ll leftvalue = query(left, s, mid, i, j);
    ll rightvalue = query(right, mid+1, e, i, j);
    return min(leftvalue, rightvalue);
}
int main()
{
    itsmdshahin;
    ll t;
    cin>>t;
    for(int z=0; z<t; z++)
    {
        ll n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        built(0,0,n-1);
        cout << "Case "<<z+1<<":\n";
        while(k--)
        {
            ll x,y;
            cin >> x >> y;
            cout << query(0,0,n-1,x-1,y-1) << endl;
        }
    }
}








