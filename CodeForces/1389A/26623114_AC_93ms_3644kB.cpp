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
            int a , b;
            cin >> a >> b;
            if(a*2 <= b){
                cout << a << " "<< a*2<<endl;
            }
        
            else{
                cout << -1 <<" "<< -1 << endl;
            }
            
       }
}