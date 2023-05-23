#include<bits/stdc++.h>

using namespace std;
int a[1005];
int ans1,ans2;
bool compare(int x,int y){
   return a[x]>a[y];
}
void dfs(int s,vector<int> *adj){

    if(adj[s].size()==0){
        ans1=s;
        return;
    }
    ans2+=a[adj[s][0]];

    dfs(adj[s][0],adj);
}
int main()
{
    int t,cas=0,n,m,u,v;
    cin>>t;
    while(t--){
        cas++;
        cin>>n>>m;
        vector<int>adj[1005];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=0;i<=n;i++){
            sort(adj[i].begin(),adj[i].end(),compare);
        }
        ans2=0;
        dfs(0,adj);
        cout<<"Case "<<cas<<": "<<ans2<<" "<<ans1<<endl;
        memset(a,0,sizeof(a));

    }
    return 0;
}