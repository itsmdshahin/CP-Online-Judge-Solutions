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

    ll n,s=1,flag=0;
    cin >> n;
    for(int i=1; i<=n;i++){
        s=s*i;
    }
    cout << s << endl;
}
