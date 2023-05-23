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
int main(){
    ll b,m,n,k,c=0,x;
    cin >> n >>m;
    while(n <= m){
            n = n*3;
            m = m*2;
            c++;

    }
    cout << c << endl;
}
