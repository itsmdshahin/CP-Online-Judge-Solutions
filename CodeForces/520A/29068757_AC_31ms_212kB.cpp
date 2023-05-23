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
    int n;cin >> n;
    set<char>Set;
    string s;
    cin >> s;
    transform(s.begin(),s.end(), s.begin(), ::tolower);
    for(int i=0;i<n;i++)Set.insert(s[i]);
    
    if(Set.size()>=26)cout << "YES" << endl;
    else cout << "NO" << endl;
  
}
