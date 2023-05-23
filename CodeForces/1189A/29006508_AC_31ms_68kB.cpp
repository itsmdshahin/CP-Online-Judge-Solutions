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
    int n,x=0;cin >>n;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)if(s[i]=='1')x++;
    if(x+x==n){
        cout << 2 << endl;
        cout << s.substr(0,n-1) << " "<< s[n-1] << endl;
    }
    else{
        cout <<1<<endl;
        cout <<s << endl;
    }
}
