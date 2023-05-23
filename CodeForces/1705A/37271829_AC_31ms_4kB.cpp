
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;


int main()
{
    ll t,z=1;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n>>m;
        n = n*2;
        vector <ll> a(n);
        bool ok=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
//        for(int i=0; i<n; i++)
//        {
//            cout<< a[i]<<" ";
//        }
//        cout << endl;
        for(int i=0; i<n/2; i++)
        {

            //cout << (a[(n-i-1)]) <<" "<<(a[(n/2)-i-1])<<"==";
            ll dif = a[(n-i-1)] - a[(n/2)-i-1];
            //cout << dif <<  "\n";
            if(dif<m){
                ok=1;
                break;
            }
        }
        if(ok){
            cout <<"NO\n";
        }
        else cout<<"YES\n";
    }
}

