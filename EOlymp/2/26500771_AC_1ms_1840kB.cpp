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
    ll a,b,m,c=0;
    cin >>a;
    if(a==0){
        c++;
    }
    else{
    while(a!=0){
       //c+=a%10;
       a = a/10;
       c++;
    }
    }
   cout << c <<endl;
}
