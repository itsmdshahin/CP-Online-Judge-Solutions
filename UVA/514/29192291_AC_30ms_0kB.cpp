
#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <stdio.h>

using namespace std;
stack <int> st;
int main()
{
    int n,cnt,k;
    while(true){
        scanf("%d",&n);
        if(!n)break;
        while(true){
            while(!st.empty())st.pop();
            k=0;
            for(int i=0;i<n;i++){
                scanf("%d",&cnt);
                if(!cnt)break;
                while(k < n && k != cnt){
                    if(st.size() > 0 && st.top() == cnt)break;

                    st.push(++k);
                }
                if(st.top() == cnt)st.pop();
            }
            if(!cnt)break;

            if(!st.size()){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        cout << "\n";
    }

}

/*int main()
{
    int t;scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n+5],b[m+5];
        map <int,int> m1,mp;
        map <int,int> m2;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            mp[a[i]] = 1;
            m1[a[i]]++;
        }
        for(int i=1;i<=m;i++){
            cin >> b[i];
            mp[b[i]] = 1;
            m2[b[i]]++;
        }
        int ans=0;
        for(auto i:mp){
            int v = i.first;
            ans += abs(m1[v]-m2[v]);
        }
        cout << ans << endl;


    }

}

/*
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
int in(){
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
*/
