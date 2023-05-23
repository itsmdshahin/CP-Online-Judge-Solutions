
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
        vector <string> s(n);
        map <string,bool> mp;
        for(int i=0;i<n;i++){
            cin >> s[i];
            mp[s[i]]=1;
        }
        bool ok=0;
        for(int i=0;i<n;i++){
            ok=0;
            for(int j=1;j<s[i].size();j++){

                if(mp[s[i].substr(0,j)] && mp[s[i].substr(j,s[i].size()-1)] ){
                    ok=1;
                    break;
                }
            }
            if(ok){
                cout << 1;
            }
            else cout << 0;

        }
        cout << endl;

    }
}

