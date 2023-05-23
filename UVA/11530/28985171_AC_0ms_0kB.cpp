#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int  main(){
    string s,s1="adgjmptw ",s2="behknqux",s3="cfilorvy",s4="sz";
    int ans;
    int t;
    cin >> t;
    cin.ignore();
    //getchar();
    for(int i=1;i<=t;i++){
        getline(cin,s);
        ans=0;
        for(int i=0;i<s.size();i++){
                if(s1.find(s[i])!=-1)ans+=1;
                else if(s2.find(s[i])!=-1)ans+=2;
                else if(s3.find(s[i])!=-1)ans+=3;
                else if(s4.find(s[i])!=-1)ans+=4;
        }
        cout <<"Case #"<<i<<": "<< ans << endl;
    }

}