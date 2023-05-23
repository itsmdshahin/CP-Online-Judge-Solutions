#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> vec;
set <ll>st;


int main()
{
    ll n;cin >> n;
    ll sum = n/2;
    cout << sum << endl;
    while(n>3){
        cout << 2 << " ";
        n -= 2;
    }
    cout <<n <<'\n';
}
