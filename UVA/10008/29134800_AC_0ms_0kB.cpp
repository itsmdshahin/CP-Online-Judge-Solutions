#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair <int,int>a, pair<int,int>b){
   // a = first, second;
   // b = first, second;
    //return a.second>b.second;
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;
}
bool cmp(pair<char,int>a, pair<char,int>b){
    if(a.first==b.second)return a.first<b.second;

    return a.second>b.second;
    }

int n(){
    int a,b,c;
    map <int,int> m;
    m[1]=2;
    m[2]=3;
    m[3]=4;
    m[4]=5;
    m[5]=6;
    /// 1 2 3 4 5
    /// 1 2  2 3   3 4  4 5   5
    vector <pair <int ,int> > v;
    for(auto i : m){
    cout << i.first<<" "<<i.second << endl;
       v.push_back({i.first,i.second});
    }
    cout << "\n";
    sort(v.begin(),v.end(),comp);
    for(auto i: v){
        cout << i.first<<" "<<i.second << endl;
    }
}
int main(){
    vector <pair <char,int>> v;
    int t,cnt[30]={0};cin >> t;
    string s,S;
    //memset(cnt,0,sizeof cnt);
    //map <pair<string,int>> m;
    cin.ignore();
    while(t-- && getline(cin,s)){
        S += s;
    }

    for(char ch:S){
        if(isalpha(ch)){
            cnt[toupper(ch)-'A']++; //65 acii;
        }
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            v.push_back({i+65,cnt[i]}); // i+'A';
        }
    }

    sort(v.begin(),v.end(),cmp);
    for(auto i: v){
        cout << i.first << " "<<i.second << endl;
    }
    //cout << S << endl;

}
