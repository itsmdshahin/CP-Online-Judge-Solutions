#include<bits/stdc++.h>
const long long mod = 1e9+7;
const int m=300008;
const int mx = 1e7 +1;
#define ll long long
bool prime[mx];

using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    cin.ignore();
    while(n--)
    {
        set <char> Set;
        cin >> s;
        s+='@';
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]!=s[i+1])
                Set.insert(s[i]);
            else
                i++;
        }
        for(auto it : Set)
        {
            cout << it;
        }
        cout << "\n";
    }

}
