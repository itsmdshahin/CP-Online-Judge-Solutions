#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll sum=0,n,a,b,go;
    cin>>n>>a>>b;
    for(int i=1; i<=n; i++)
    {
        ll c=0;
        string s = to_string(i);
        for(int j=0; j<s.size(); j++)
        {
            ll d = (s[j])-'0';
            c += d;
            //cout <<s << " "<< d << " " << i << endl;
        }
        if(c>=a && c<=b ){
                    sum += i;
         }
    }
    cout << sum << endl;
}
