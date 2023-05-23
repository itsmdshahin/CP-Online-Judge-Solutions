#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,s,d,f;
        cin>>a>>s>>d>>f;
        int ans=0;
        ans+=abs(a-d);
        ans+=abs(s-f);
        cout<<ans<<endl;
    }
    return 0;
}
