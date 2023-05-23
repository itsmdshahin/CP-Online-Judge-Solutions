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
    int t,s=0;
    cin >>t;
    cin.ignore();
    while(t--){
           string s1;
           cin >> s1;
           if(s1=="Tetrahedron")s+=4;
           else if(s1=="Cube")s+=6;
           else if(s1=="Octahedron")s+=8;
           else if(s1=="Dodecahedron")s+=12;
           else s+=20;
    }
    cout << s << endl;
    return 0;
    
}