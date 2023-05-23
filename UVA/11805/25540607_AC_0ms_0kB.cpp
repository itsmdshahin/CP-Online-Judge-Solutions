#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        int n,p,k;
        cin >> n >> k >> p;
        k--;
        cout<<"Case "<<i<<": "<<((k+p)%n)+1<<endl;
    }
    return 0;

}
