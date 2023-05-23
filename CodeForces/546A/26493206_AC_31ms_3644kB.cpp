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
    int b,k,n,w,i,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum = sum + i*k;
    }
    if(sum>n)
    {
        b = sum - n;
        printf("%d\n", b);
    }
    else
        printf("0");
}