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
    ll a,b,n,m,c=0;
    cin >>n;
    while(n!=1){
            if(n%2==0){
                n = n / 2;
                c++;
            }
            else{
                n = (n+1)/2;
                c+=2;
            }

    }
    cout << c <<endl;
}
