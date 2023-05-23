#include<stdio.h>
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#define ll long long int
using namespace std;
int main(){
    ll t,a;
    cin>>t;
    while(t--){
    cin >> a;
    if(a%4==0)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;
    }
}
