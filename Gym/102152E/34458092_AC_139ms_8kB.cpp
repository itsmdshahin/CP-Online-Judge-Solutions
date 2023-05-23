
#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    ll t;cin >> t;
    while(t--){
        ll f=0,n,m,sum=0,mnn=1e7;cin >> n >> m;
        string s,c;cin >> s >>c;
        string s2;cin >>s2;
        bool has[26]={0};
        bool ok=true;
        for(char c:s)
        {
            has[c-'a']=1;
        }
        for(int i=0;i<m;i++){
            mnn=1e7;
            if(has[s2[i]-'a']==0)
            {
//                cout<<"-1\n";
                ok=false;
                break;
            }
            for(int j=0;j<n;j++){
                if(s2[i]==s[j]){
                    mnn = min(mnn, ((ll)c[j]-48) );
                }

            }
            sum += mnn;
        }
        if(ok==0)cout << -1 << endl;
        else cout << sum << endl;
    }
}
