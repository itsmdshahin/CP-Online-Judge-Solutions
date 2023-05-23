#include<bits/stdc++.h>
#define ll long long

using namespace std;
void solve()
{
    string s,t="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    int n=78;
    cin>>s;
    int l=s.size();
    for(int i=0; i<l-1; i++)
    {
        if(s[i+1]==s[i]+1)
            continue;
        else if(s[i]=='z' and s[i+1]=='a')
            continue;
        else
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
}
int main()
{

    ll tc;
    cin >> tc;

    while(tc--)
    {
        solve();
    }
    return 0;
}
