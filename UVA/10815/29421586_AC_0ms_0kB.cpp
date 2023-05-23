#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include <stdint.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
#define F first
#define S second

using namespace std;
void make(string s,set<string> &st) {
       int i;
       string s2;
       s += '@'; 
       for(int i=0;i<s.size();i++){
               if(isalpha(s[i])){
                   s2 += tolower(s[i]);                  
               }
               else{
                   st.insert(s2);
                   s2.clear();
               }
       }
}
int main(){
          shahin
          set <string> st;
          string s;
          while(cin >> s){
               make(s, st);                 
          }
          for(auto i: st){
               if(i.size()!=0){                 
                 cout << i <<endl;
               }
          }
}
          
