
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
        cin >> n>>m;
        ll a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
                if(a[i][j]>a[max_i][max_j]){
                    max_i=i;
                    max_j=j;
                }
            }
        }
        ///cout << a[max_i][max_j] << endl;
        ll s1 = max(max_i+1, n-max_i);
        ll s2 = max(max_j+1, m-max_j);
        cout << s1 * s2 << endl; 
    }
}

