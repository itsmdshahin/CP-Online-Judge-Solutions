#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    ll cnt=0;
    vector <ll> a(n);
    map <ll, ll> mp;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        mp[c]++;
    }
    for(auto i: mp){
        if(i.first<=i.second){
            cnt += i.second-i.first;
        }
        else cnt += i.second;
    }
    cout << cnt << endl;
}
