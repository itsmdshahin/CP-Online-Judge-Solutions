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

    ll a,b,c,m=0,n=0;
    cin >> a;
    while(a--){
        cin >> b;
        if(b==0){
            m++;
        }
        else
           n++;
    }
    if(n > m)
        cout << m << endl;
    else cout << n << endl;
}
