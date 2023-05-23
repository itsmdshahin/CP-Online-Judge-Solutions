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

    ll n,flag=0,co=0;
    cin >> n;
    float x,m=0,b;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(x > 0 && x<=100)
        {
            m += x;
            flag=1;
co++;
        }
    }

    if(flag==1)
    {
        b = m/co;
        printf("%.2f\n",b);
    }
    else
    {
        printf("Not Found\n");
    }
}