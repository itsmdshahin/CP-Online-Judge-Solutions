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

int main()
{
    itsmdshahin;
    //Prime_seive()
    ll a,b,x,y;cin>>a>>b>>x>>y;
    ll fp = a-x;
    ll sp = b-y;
    if(fp>sp){
        if(a<=b)cout << "Second"<<endl;
        else cout << "First" << endl;
    }
    else{
        if(a<=b)cout << "Second"<<endl;
        else cout << "First" << endl;
    }
}
