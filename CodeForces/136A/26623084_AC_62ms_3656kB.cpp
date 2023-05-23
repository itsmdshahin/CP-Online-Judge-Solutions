#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<iterator>
#include<cmath>
#define MAX_SIZE 228228
#define ll long long
using namespace std;
int main(){
 
   int n;
   cin >> n;
   vector<int > vec(n);
   for(int i=0;i<n;i++){
        cin >> vec[i];
   }
   for(int j=1;j<=n;j++){
    for(int i=0;i<n;i++){
        if(vec[i]==j){
            cout << i+1 << " ";
        }
    }
   }
   cout << endl;
}