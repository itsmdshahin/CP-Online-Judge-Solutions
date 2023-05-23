#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin >> n >>m;

    ll left = (n/4) *4;
    //left = n- (left * 4);

    ll ans1 = 0;
    while(left<=n-1)
    {
        ans1^=left++;
    }

    ///
    ll right = (m/4) *4;
    //left = n- (left * 4);

    ll ans2 = 0;
    while(right<=m)
    {
        ans2^=right++;
    }

    cout << (ans2^ans1) << "\n";

}
