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
const int mx=1e7+9;
const int N=1005;
bool prime[1000000+7];
using namespace std;

vector<int> V[N];
int dis[N],vis[N];
void bfs(int u){
    queue <int> q;
    q.push(u);
    dis[u]=0;
    vis[u]=1;
    while(q.size()){
        u = q.front();q.pop();
        for(auto i: V[u]){
            if(vis[i]==1)continue;
            vis[i]=1;
            dis[i]= dis[u]+6;
            q.push(i);
        }
    }

}
int main(){
     int t;cin>>t;
     while(t--){
        int n,e;cin>>n>>e;
        while(e--){
            int u,v;cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
        }
        int source;cin>>source;
        bfs(source);
        for(int i=1;i<=n;i++){
            if(i==source)continue;
            if(vis[i]==0)dis[i]=-1;
            cout << dis[i]<<" ";
        }cout<<'\n';
        for(int i=1;i<=n;i++){
            vis[i]= dis[i]= 0;
            V[i].clear();
        }
     }
     return 0;
}
