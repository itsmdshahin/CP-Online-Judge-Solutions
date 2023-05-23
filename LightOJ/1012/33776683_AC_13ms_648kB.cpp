#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};
char str[25][25];
int vis[25][25];
queue <pair <int,int>> q;

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int z=1;z<=tc;z++){
        int ans=0,cnt=0,strat_y,strat_x,n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> str[i][j];
                if(str[i][j]=='@'){
                    strat_x=i;
                    strat_y=j;
                }
            }
        }
        memset(vis,0,sizeof vis);
      //  while(!q.empty())q.pop();

        q.push({strat_x,strat_y});
        vis[strat_x][strat_y]=1;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();ans++;
            //cout <<"INSIDE "<< cnt << endl;
            for(int i=0;i<4;i++){
                int xx = x+dx[i];
                int yy = y+dy[i];
                if(vis[xx][yy])continue;
               // cnt++;
                if(xx>=0 && xx<m&& yy>=0 && yy<n && str[xx][yy]!='#'&& vis[xx][yy]==0){
                    vis[xx][yy]=1;
                    //cnt++;
                    q.push({xx,yy});
                }
            }
        }
        cout <<"Case "<<z<<": "<< ans << endl;
    }
}
