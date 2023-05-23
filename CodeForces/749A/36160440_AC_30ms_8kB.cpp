#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
     ll cnt=0,n;cin>>n;
     cnt = n/2;
     cout << cnt << endl;
     while(n>3){
        cout << 2 << " ";
        n -= 2;
     }
     cout << n << endl;

}
