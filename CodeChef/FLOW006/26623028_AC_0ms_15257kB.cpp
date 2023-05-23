#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<iterator>
#include<cmath>
#define MAX_SIZE 100
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int n,s=0;
       cin >> n;
       while(n!=0){
            s += n%10;
            n /=10;
       }
       cout << s << endl;
       
}
       
}
