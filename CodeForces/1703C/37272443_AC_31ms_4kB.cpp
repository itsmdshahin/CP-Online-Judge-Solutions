
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
        ll n;cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            ll x;cin >> x;
            string s;cin >> s;
            for(int j=0;j<x;j++){
                if(s[j]=='D' && a[i]==9){
                    a[i]=0;
                }
                else if(s[j]=='U' && a[i]==0){
                    a[i]=9;
                }
                else if(s[j]=='D'){
                    a[i]=a[i]+1;
                }
                else if(s[j]=='U'){
                    a[i]=a[i]-1;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }
}

