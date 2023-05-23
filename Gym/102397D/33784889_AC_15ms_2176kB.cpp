#include<bits/stdc++.h>
#define shahin std::ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const int nax=1000*1007;
const ll mod = 1e9 + 7;
#define MAX_SIZE 228228
#define F first
#define S second
ll N = 998244353;
const int mx=1e6+9;
bool prime[1000000+7];
using namespace std;
int main(){
        ll n,m,x,minn,ans=0,cnt=0,sum=0;
        cin >>n>>m;
        ll a[n];
        for(int i=0;i<n;i++){
                cin>>a[i];
                sum += a[i];
        }
        minn = n;
        for(int i=0;i<n;i++){
                ans = a[i];
                cnt=1;
                if(ans >= m){
                    if(cnt<minn){
                        minn = cnt;
                    }
                }
                for(int j=i+1;j<n;j++){
                    x=0;
                    ans += a[j];
                    cnt++;
                    if(ans >= m){
                        x=1;
                        break;
                    }
                }
                if(x==1 && minn>cnt)minn=cnt;
        }
        if(sum<m){
            cout << -1 << endl;
        }
        else cout << minn << endl;

}
