#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define mx                1000006
using namespace std;
ll a[mx],tree[4*mx];
void built(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node]=a[s];
        return;
    }
    ll left = (node*2);
    ll right = (node*2)+1;
    ll mid = (s+e)/2;
    built(left, s, mid);
    built(right, mid+1,e);
    tree[node] = max(tree[left],tree[right]);
}
int query(ll node,ll s,ll e,ll i, ll j)
{
    if( i > e ||  j < s)
    {
        return -1;
    }
    if(s>=i && e<=j)
    {
        return tree[node];
    }
    ll left = (node*2);
    ll right = (node*2)+1;
    ll mid = (s+e)/2;
    ll leftvalue = query(left, s, mid, i, j);
    ll rightvalue = query(right, mid+1, e, i, j);
    //cout<<"LEFT = "<<leftvalue<<" RIGHT = "<<rightvalue<<" == "<<leftvalue+rightvalue<<endl;
    return max(leftvalue,rightvalue);
}

int main()
{
    ll t,zz=1;
    cin >> t;
    while(t--)
    {
        ll n,c,r;
        cin >> n>>c>>r;
        vector <ll> vec;
        a[1]=1;
        ll i,x1,prev;
        cin >> prev;
        vec.push_back(1);
        for( i=2; i<=n; i++)
        {
            cin >> x1;
            if(x1== prev)
            {
                a[i] = a[i-1]+1;
            }
            else
            {
                a[i] = 1;
                vec.push_back(i);
            }
            prev = x1;
        }
        vec.push_back(i);
        built(1,1,n);
        ll pos1,pos2,mxx=-1,now1,now2;
        cout << "Case "<< zz++ <<": "<<endl;
        while(r--)
        {

            mxx = -1;
            ll x,y;
            cin>>x>>y;
            pos1 = upper_bound(vec.begin(),vec.end(),x)-vec.begin();
            ll get = vec[pos1];
            get = min(y,get-1);
            now1 = a[get]-a[x]+1;
            get++;
            now2 = -1;
            if(get<=y)
            {
                now2 = query(1,1,n,get,y);
            }
            mxx = max({mxx,now1,now2});
            cout << mxx << endl;
        }
    }
}
