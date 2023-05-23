#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include <string.h>
#include <vector>
 
#define ll long long int
using namespace std;
int main() {
    int i,j;
    string a,b;
    vector <string> vec;
    cin >> a;
    cin >> b;
    
	for(i=0,j=0; i<a.size(); i++,j++){
	    a[i] = tolower(a[i]);
	    b[i] = tolower(b[i]);
	}
	if(a==b)
	    cout << 0 << endl;
	else{
	    vec.push_back(a);
	    vec.push_back(b);
	    sort(vec.begin(),vec.end());
	    if(vec[0]==a)
	        cout << -1 << endl;
	    else
	        cout << 1 << endl;
	    
	}
}