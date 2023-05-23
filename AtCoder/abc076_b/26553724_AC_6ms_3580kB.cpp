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
        ll n,k;
        cin >> n;
        cin >> k;
        ll sum=1,s=0;
        for(int i=1;i<=n;i++){
            if(sum <= k){
                sum = sum*2;
            }
            else{
                sum += k;
            }
          //  cout << sum << " "; //for tasting error
        }
        cout << sum  << endl;
}