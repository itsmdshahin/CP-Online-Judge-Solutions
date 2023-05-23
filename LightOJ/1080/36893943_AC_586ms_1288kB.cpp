#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long

using namespace std;

bool nodes[4*100005];
void Bulit(ll node,ll s,ll e,ll i, ll j){
    if(s==i and e==j){
        nodes[node]= !nodes[node];
        return;
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (s+e)/2;
    if(j <= mid){
        Bulit(left,s,mid,i,j);
    }
    else if(mid<i){
        Bulit(right,mid+1,e,i,j);
    }
    else{
        Bulit(left,s,mid,i,mid);
        Bulit(right,mid+1,e,mid+1,j);
    }
}
int query(ll node,ll s,ll e,ll pos){
    if(e == pos and s== pos){
        return nodes[node];
    }
    ll left = node*2;
    ll right = node*2+1;
    ll mid = (s+e)/2;
    if(nodes[node]){
        nodes[left] = !nodes[left];
        nodes[right] = !nodes[right];
        nodes[node]=0;
    }
    if(pos<=mid){
        return query(left, s, mid, pos);
    }
    else query(right, mid+1,e, pos);
}

int main()
{
    itsmdshahin;
    ll t,z=1;cin>>t;
    while(t--){
        memset(nodes, 0, sizeof(nodes));
        string s;cin >> s;
        ll n;cin >> n;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1'){
                Bulit(1,1,s.size(),i+1,i+1);
            }
        }
        cout << "Case "<<z++<<": "<<endl;
        while(n--){
            char ch;cin >> ch;
            if(ch=='I'){
                ll x,y;cin >> x>> y;
                ll r = y-1;
                Bulit(1,1,s.size(),x,y);
            }
            else{
                ll x;cin >> x;
                ll ans = query(1,1,s.size(),x);
                cout << ans << endl;
            }
        }
    }
}
