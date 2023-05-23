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
    float a,b;
    int check,count=0;
    scanf("%f %f",&a,&b);
    while(1)
    {
        a=a/b;
        if(a<=1)
            break;
        count++;
    }
    printf("%d\n",count);
    return 0;
}