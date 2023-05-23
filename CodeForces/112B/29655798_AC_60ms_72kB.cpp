#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include <stdint.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
#define F first
#define S second

using namespace std;
int main(){
        ll a,b,c;
        cin >> a >> b >> c;
        if((b==a/2||b==a/2+1)&&(c==a/2||c==a/2+1))cout<<"NO\n";
        else cout<<"YES\n";
        return 0;
}
