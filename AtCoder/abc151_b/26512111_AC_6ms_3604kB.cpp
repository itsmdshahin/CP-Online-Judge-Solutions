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
    cin >> n >> k >> m;
    ll a[n];
    for(int i=0;i<n-1;i++){
        cin >> a[i];
        c += a[i];
    }
    x = (n*m)-c;
     if(x <= 0){
        cout << 0 << endl;
    }
    else if(x > k) cout << -1 << endl;
    else
        cout << x << endl;

}