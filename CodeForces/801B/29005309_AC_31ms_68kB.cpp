#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
using namespace std;
bool fu(int a,int b){
                      return a>b;
}

int main() 
{ 
    int n;
    string s,t,c;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
            if(s[i]<t[i]){
                cout<<-1;
                return 0;
            }
            else{
                c.push_back(t[i]);                  
            }
    }
    cout<<c;
}
