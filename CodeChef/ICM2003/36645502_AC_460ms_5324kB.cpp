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
#define PI acos(-1)
const ll INF=1e18;
const ll MOD_1=1e9+7;
const ll MOD_2=998244353;
const ll mod = 1e9+7;

using namespace std;
 
int main()
{
    itsmdshahin;
    ll t;cin >> t;
    while(t--){
        double a,b;cin >> a >> b;
        double l=1e-6,r =(PI)/2-1e-6,ans=0;
        for(int i=1;i<=100;i++){
            double mid = (l+r)/2;
            double x=mid;
            double val = ((x*x)+(a*x)+b)/sin(x);
            x += 1e-6;
            double val2 = ((x*x)+(a*x)+b)/sin(x);
            if(val <= val2){
                ans=val;
                r = mid-1e-6;
            }
            else{
                l = mid+ 1e-6;
            }

              //ans = min(ans,((((i*i)+(a*i)+b)/sin(i))));
             //printf("%.10f\n",(((i*i)+(a*i)+b)/sin(i)));
            //cout <<(((i*i)+(a*i)+b)/sin(i)) << endl;
        }
        printf("%.10f\n",ans);

    }

}
