
#include<bits/stdc++.h>

const long long mod = 1e9+7;
const int m=300008;
const int mx = 1e7 +1;
#define ll long long
bool prime[mx];

using namespace std;
int main(){
    string s,s1="ABC";
    cin >> s;
    int ok=0;
    for(int i=0;i<s.size();i++){
        string str = s.substr(i,3);
        sort(str.begin(),str.end());
        if(str == "ABC")ok = 1;
    }
    if(ok){
        cout << "YES\n";
    }
    else cout<<"NO\n";

}
