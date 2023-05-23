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
        ll n1,n2,k1,k2;
        cin >> n1 >> n2 >> k1 >> k2;
        //n1 += k1;
        //n2 += k2;
        if(n1 > n2){
                              cout << "First\n";
        }
        else cout << "Second\n";
        return 0;
}
