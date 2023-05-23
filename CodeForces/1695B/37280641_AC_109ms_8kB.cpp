
#include<bits/stdc++.h>
#define itsmdshahin		  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll                long long
#define MX				  1000006
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m,max_i=0,max_j=0;
        cin >> n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]<a[max_i])
            {
                max_i=i;
            }
        }
        if(n%2==1){
                cout << "Mike\n";
        }
        else if(max_i%2==0)
        {
            cout <<"Joe\n";
        }
        else cout << "Mike\n";
    }
}

