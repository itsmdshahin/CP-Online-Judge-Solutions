#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

     ll t;cin >> t;
     while(t--){
        ll cnt=0;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')cnt++;
        }
        if((cnt+1)<=7)cout << "YES" << endl;
        else cout << "NO"  << endl;
     }
}
