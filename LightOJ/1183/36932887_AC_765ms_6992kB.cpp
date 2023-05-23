#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define sz                100005

using namespace std;

struct node
{
    ll sum,prop;
} tree[4*sz];;

void built(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node].sum = 0;
        tree[node].prop = -1;
        return;
    }
    ll left = node<< 1ll;
    ll right = (node<<1ll) +1;
    ll mid = (s+e)>>1ll;
    built(left, s, mid);
    built(right, mid+1,e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}
void update_node(ll node,ll s,ll e)
{
    ll newvalue = tree[node].prop;
    if(tree[node].prop != -1)
    {
        ll left = node<< 1ll;
        ll right = (node<<1ll) +1;
        ll mid = (s+e)>>1ll;
        tree[left].sum = (mid-s+1) * newvalue;
        tree[right].sum = (e-mid) * newvalue;
        tree[left].prop = newvalue;
        tree[right].prop = newvalue;
    }
    tree[node].prop = -1;
}

void update(ll node,ll s,ll e,ll i,ll j,ll newvalue)
{
    if( i>e || j<s)return;
    if(i<=s&& j>=e)
    {
        tree[node].sum = (e-s+1)*newvalue;
        tree[node].prop = newvalue;
        return;
    }
    update_node(node,s,e);
    ll left = node<< 1ll;
    ll right = (node<<1ll) +1;
    ll mid = (s+e)>>1ll;
    update(left,s,mid,i,j,newvalue);
    update(right,mid+1,e,i,j,newvalue);
    tree[node].sum = tree[left].sum + tree[right].sum;
}
int query(ll node,ll s,ll e,ll i,ll j)
{
    if( i>e || j<s)return 0;
    if(i<=s&& j>=e)
    {
        return tree[node].sum;
    }
    update_node(node,s,e);
    ll left = node<< 1ll;
    ll right = (node<<1ll) +1;
    ll mid = (s+e)>>1ll;
    ll p1=0,p2=0;
    p1 = query(left,s,mid,i,j);
    p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}


int main()
{
    ll t,z=1;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        built(1,1,n);
        cout << "Case "<<z++ << ":\n";
        while(m--)
        {
            int c;
            cin >> c;
            if(c==1)
            {
                int x,y,zz;
                cin >> x>> y>>zz;
                update(1,1,n,x+1,y+1,zz);
            }
            else
            {
                ll x,y;
                cin >> x >> y;
                ll a = query(1,1,n,x+1,y+1);
                ll b = y-x+1;
                ll g = __gcd(a,b);
                a /= g;
                b /= g;
                if(b==0)
                {
                    cout << 0 << endl;
                }
                else if(b==1)
                {
                    cout << a << endl;
                }
                else cout << a << "/" << b << endl;
            }
        }
        memset(tree,0,sizeof(tree));
    }

}
