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
int main()
{

    ll b,c,m=0,n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]++;
                m++;
            }
        }
    }
    cout << m << endl;
}
