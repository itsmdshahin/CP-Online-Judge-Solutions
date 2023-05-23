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
        ll t;
        string s;
        cin >> t;
        getchar();
        while(t--){
            cin >> s;
            if(s.size() > 10){
               cout << s[0] << s.size()-2 << s[s.size()-1] << endl;                     
            }
            else cout << s << endl;
        }
}
