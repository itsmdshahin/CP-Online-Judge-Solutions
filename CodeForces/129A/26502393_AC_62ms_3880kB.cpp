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
    ll a,b,n,m,c=0,c1=0,c2=0;
    cin >>a;
    for(int i=1;i<=a;i++){
        cin >> n;
        c += n;
        if(n%2==0)c1+=1;
        else c2+=1;
    }
    if(c%2==0)cout << c1 << endl;
    else if(c%2!=0){
        cout << c2 <<endl;
    }
    
}