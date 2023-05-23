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

ll number_of_ans(ll n){
    ll pw=5,cnt=0;
    while(n>=pw){
        cnt += (n/pw);
        pw *= 5;
    }

    return cnt;
}
int main()
{
    itsmdshahin;
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
         ll n;cin >> n;
         //ll get = number_of_ans(n);
         ll mid=0,l=1, r=1e9,ans=-1;
         while(l<=r){
            mid = (l+r)/2;
            ll get = number_of_ans(mid);
            //cout <<get << " " <<n <<"\n";
            if(get==n){
                ans=mid;
                r = mid-1;
            }
            else if(get<n){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
         }
         cout << "Case "<<i+1<<": ";
         if(ans==-1)cout << "impossible\n";
         else cout << ans << endl;
    }
}
