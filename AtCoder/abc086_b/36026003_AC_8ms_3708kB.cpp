#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string n,m;cin>>n>>m;
    string s = n+m;
    ll num = stoi(s);
    ll g = sqrt(num);
    if(g*g==num)cout <<"Yes\n";
    else cout << "No" << endl;
}
