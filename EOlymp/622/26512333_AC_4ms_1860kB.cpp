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
    ll n,b,i=0,c=0,d;
    string s;
    cin >> n;
    while(n!=0){
        b = n%2;
        if(b==1){
            c++;
        }
        n = n/2;
    }
    //b = n/2;
    cout << c << endl;
}