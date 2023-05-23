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
    int n,cnt=0;
    string s,t,c;
    cin>>s;
    for(int i=0;i<s.size();i++){
            if(s[i]<='Z'&&s[i]>='A'){
                cnt++;
            }
    }
    cout<<cnt+1<<endl;
}
