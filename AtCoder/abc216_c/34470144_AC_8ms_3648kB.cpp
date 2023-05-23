#include<bits/stdc++.h>

#define ll long long

using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<string>v1;
    while(n!=0)
    {
        if(n%2==0)
        {
            n=n/2;
            v1.push_back("B");

        }
        else
        {
            n=n-1;
            v1.push_back("A");
        }
    }

    for(ll i=v1.size()-1;i>=0;i--)
    {
        cout<<v1[i];
    }
    cout<<endl;





}