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
    cin >> a;
    if(a%4==0 || a > 2 && a%2==0){
        cout << "YES" <<endl;
}
    else cout << "NO" <<endl;
}