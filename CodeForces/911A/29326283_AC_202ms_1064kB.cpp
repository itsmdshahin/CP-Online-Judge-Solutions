#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,x;cin>>n;
    ll mn=INT_MAX,ans = INT_MAX,last = -INT_MAX;
    vector <int> a;
    for(int i=0;i<n;i++){
            cin >> x;
            a.push_back(x);
            mn = min(mn,x);
    }
    for(int i=0;i<n;i++){
        if(a[i]==mn){
            ans = min(ans, i-last);
            last=i;
        }
    }
    cout<< ans << endl;
}
