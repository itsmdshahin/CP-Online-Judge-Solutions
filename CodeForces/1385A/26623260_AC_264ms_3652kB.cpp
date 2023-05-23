#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#include <string.h>
#define ll long long int
using namespace std;
int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll a,b,c;
	    cin >> a >> b >> c;
	    if(a==b && b==c && c==a){
	        cout << "YES" << endl;
	        cout << a << " " << a << " " << a <<endl;
	   }
	   else if(a > b && b < c && a == c){
	       cout << "YES" << endl;
	       cout << b << " " << b << " " << a  << endl;
	   }
	   else if(a < b && a < c && b==c)
	   {
	       cout << "YES" << endl;
	       cout << a << " " << a <<  " " << b << endl;
	   }
	   else if(a==b && a > c && b > c)
	   {
	       cout << "YES" << endl;
	       cout << c << " " << c <<  " " << a << endl;
	   }
	   else{
	        cout << "NO" << endl;
	    }
	}
    
    
        
    return 0;
 
}