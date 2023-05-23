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
    int n,j;
    cin >> n;
    for(j=1;j<=n;j++){
        ll a,b,i,sum=0;
        cin >> a;
        cin >> b;
        for(i=a;i<=b;i++){
                if(i%2){
                 sum+=i;}
        }
        cout << "Case " << j << ": " << sum<<endl;
    }
    return 0;
}
