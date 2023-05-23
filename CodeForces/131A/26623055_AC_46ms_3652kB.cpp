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
 
    string str;
    getline(cin,str);
    bool OK = true;
 
    for(int i = 1; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            OK = false;
            break;
        }
    }
    if(OK){
        for(int i = 0; i < str.size(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z')str[i]+=32;
            else str[i]-=32;
        }
    }
    cout << str << endl;
    return 0;
}