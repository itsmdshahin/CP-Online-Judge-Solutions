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

    ll n,a,b,c,m=0;
    cin >> a >> b >> c;

    for(int i=a;i<=b;i++){
        if(c % i==0){
            m++;
        }
    }
    cout << m << endl;

}
