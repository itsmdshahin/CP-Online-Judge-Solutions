
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
        ll n,c=0;cin >> n;
        string s,s1="",s2="";
        cin >> s;
        if(s[0]!='9'){
            for(int i=0;i<n;i++){
                s1 +='9';
            }
            for(int i=0;i<n;i++){
                cout << s1[i]-s[i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                s1+='1';
            }
            for(int i=n-1;i>=0;i--){
                if(c)s[i]++;
                if(s[i]>s1[i]){
                    c=1;
                    s2 += ((11-(s[i]-'0'))+'0');
                }
                else{
                    s2 += ((1-(s[i]-'0'))+'0');
                    c=0;
                }
            }
            reverse(s2.begin(),s2.end());
            cout << s2;
        }
        cout<< endl;
    }
}

