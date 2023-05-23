
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// cf63a

int main(){
    map <string,string> out;
    map <string,string>::iterator it;
    string s1,s2;
    int n,t;cin >> t;
    cin.ignore();
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        out[s1]=s2;
    }
    cin >> n;
    getchar();
    while(n--){
        getline(cin,s1);
        it = out.begin();
        while(it!=out.end()){
            if(it->first == s1){
                cout << it->second << endl;
                break;
            }
            else if(it->second==s1){
                cout << it->first<<endl;
                break;
            }
            it++;
        }
    }
}