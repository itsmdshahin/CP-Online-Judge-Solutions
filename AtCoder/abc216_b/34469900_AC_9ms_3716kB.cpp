#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n,yes=0;
    cin>> n;
    string s1,s2;
    vector<string>v1;
    vector<string>v2;
    for(ll i=0 ;i<n;i++)

    {
        cin>>s1;
        v1.push_back(s1);
        cin>>s2;
        v2.push_back(s2);



    }



    for(ll i=0 ;i<n;i++)

    {
       for(ll j=i+1;j<n;j++)
       {
           if(v1[i]==v1[j])
           {
               if(v2[i]==v2[j])
               {
                   yes=1;
                   break;
               }
           }

       }


    }
    if(yes==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


}