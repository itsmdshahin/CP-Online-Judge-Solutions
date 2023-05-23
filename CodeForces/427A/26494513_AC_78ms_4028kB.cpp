#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#include <string.h>
#include<set>

#define ll long long int
using namespace std;
int main()
{

    int n,of=0,ut=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{   
    cin>>a[i];
}
for(int i=0;i<n;i++)
{   
    if(a[i]==-1)
    {
        if(of>0)
        of--;
        else if (of==0)
        ut++;
    }
    else 
    of+=a[i];
}
cout<<ut<<endl;
}
