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
    int t;
    cin >> t;
    while(t--){
    int n,j,sum=1;
    cin >> n;
    for(j=1;j<=n;j++){
        sum = sum * j;
    }
    cout << sum << endl;
    }
    return 0;
}
