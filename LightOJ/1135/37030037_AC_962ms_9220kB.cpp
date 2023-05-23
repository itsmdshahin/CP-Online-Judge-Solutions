

#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;

ll arr[MX],lazy[4*MX];
struct node
{
    ll value[3],prop;
} tree[4*MX];

void init(ll n, ll b, ll e)
{
    if(b==e)
    {
        tree[n].value[0]=1;
        tree[n].value[1] = 0;
        tree[n].value[2] = 0;
        tree[n].prop = 0;
        return;
    }

    ll mid=(b+e)/2;
    ll left = 2*n;
    ll right = left+1;
    init(left,b,mid);
    init(right,mid+1,e);

    for(int i=0; i<3; i++)
    {
        tree[n].value[i] = tree[left].value[i]+tree[right].value[i];
    }
    tree[n].prop = 0;

}

void get_propagte(ll n, ll b, ll e)
{
    if(!tree[n].prop)
    {
        return;
    }
    ll mid=(b+e)/2;
    ll left = 2*n;
    ll right = left+1;
    if(tree[n].prop == 1)
    {
        tree[n].value[2] = tree[n].value[1];
        tree[n].value[1] = tree[n].value[0];
        tree[n].value[0] =  (e-b+1) - (tree[n].value[1]+tree[n].value[2]);
    }
    else
    {
        tree[n].value[1] = tree[n].value[2];
        tree[n].value[2] = tree[n].value[0];
        tree[n].value[0] =  (e-b+1) - (tree[n].value[1]+tree[n].value[2]);

    }

    if(b!=e)
    {
        tree[left].prop += tree[n].prop;
        tree[right].prop += tree[n].prop;

        tree[left].prop %= 3;
        tree[right].prop %= 3;
    }
    tree[n].prop = 0;
}


ll query(ll n, ll b, ll e, ll i, ll j)
{
    get_propagte(n, b, e);
    if(b>j || e<i)
        return 0;
    if(b>=i && e<=j)
        return tree[n].value[0];

    ll mid=(b+e)/2;
    ll left = 2*n;
    ll right = left+1;
    ll p=query(left,b,mid,i, j);
    ll q=query(right,mid+1,e,i, j);
    for(int i=0; i<3; i++)
    {
        tree[n].value[i] = tree[left].value[i]+tree[right].value[i];
    }
    return p+q;
}
void update(ll n, ll b, ll e, ll i, ll j)
{
    get_propagte(n, b, e);
    if(b>j || e<i)
        return;
    if(b>=i && e<=j)
    {
        tree[n].prop++;
        get_propagte(n, b, e);
        return;
    }

    ll mid=(b+e)/2;
    ll left = 2*n;
    ll right = left+1;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    for(int i=0; i<3; i++)
    {
        tree[n].value[i] = tree[left].value[i]+tree[right].value[i];
    }
}



int main()
{
    ll t,z=1;cin >> t;
    while(t--){
    ll n,m;
    cin >> n >> m;
    init(1,1,n);
    cout << "Case "<<z++ << ": \n";
    while(m--)
    {
        ll x,y,l;
        cin >> l >>x >> y;
        if(l==0)update(1,1,n,x+1,y+1);
        else
        {
            cout << query(1,1,n,x+1,y+1) << endl;
        }

    }
    }
}
