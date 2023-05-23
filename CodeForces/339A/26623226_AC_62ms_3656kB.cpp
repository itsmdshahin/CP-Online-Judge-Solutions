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
int main() {
    int i,a;
    string s,si;
    cin >> s;
    
    int len=s.size();
    for(i=0;i<len;i+=2)
    si += s[i];
    len = si.size();
   
    sort(si.begin(), si.end());
    for(i=0;i<len;i++)
    {
        if(i==len-1) cout<<si[i]<<"\n";
        else cout << si[i] <<'+';
    }
    
	        
}