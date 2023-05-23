#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <stdio.h>

using namespace std;

int main(){
    long long n,k,cnt=0;cin>> n >> k ;
    vector <long long> a(n);
    map <int,int>m;
    for(auto i=0;i<n;i++){
           cin >> a[i];
           m[a[i]]=1;
    }
    for(auto i=0;i<n;i++){
        if(m[a[i]+k]==1){
            cnt++;
        }
    }
    cout << cnt << endl;
}