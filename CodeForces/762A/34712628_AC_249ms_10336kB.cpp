#include <bits/stdc++.h>
#define ll long long
#include<cmath>
bool prime[10000000+1];
auto clc = clock();
using namespace std;
set <ll> st;
vector <ll> a;

int main()
{

    ll n,k;
    cin >> n>>k;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i!=i)a.push_back(i);
            a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());
    //for(auto i: a)cout << i << " ";
    if(a.size()<k)cout << -1 << endl;
    else cout << a[k-1]<<endl;
}
