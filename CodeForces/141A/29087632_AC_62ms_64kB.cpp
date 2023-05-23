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
bool isv(char ch){return ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u';}

bool is3(char ch){return ch == 'o' || ch == 's' || ch =='ch' || ch =='sh' || ch == 'x';}

bool is4(char ch1, char ch2){return (ch1 == 'c' && ch2 == 'h') || (ch1 == 's' && ch2 == 'h');}
int main(void)

{

    string a,b,c;
    cin >> a >> b >> c;
    a += b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)cout<<"YES\n";
    else cout << "NO\n";
}
