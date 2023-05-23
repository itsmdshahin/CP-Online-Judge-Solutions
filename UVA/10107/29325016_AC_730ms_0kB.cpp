#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <stdio.h>
#define ll long long
using namespace std;

int main() {
    ll n,ans;
    vector <ll> a;
    while(cin>>n && n!=0){
        a.push_back(n);
        sort(a.begin(),a.end());
        if(a.size()%2!=0){
            cout << a[a.size()/2] << endl;
        }
        else{//1 2 3 4 5 6
            cout <<  (a[(a.size()/2)-1] + a[a.size()/2])/2 << endl;
        }
    }
}
