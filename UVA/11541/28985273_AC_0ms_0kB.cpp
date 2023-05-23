#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int  main(){
    string s;
    int t;
    cin >> t;
    cin.ignore();
    //getchar();
    for(int i=1;i<=t;i++){
        getline(cin,s);
        int ans;
        char last;
        string cnt="";
        cout <<"Case "<<i<<": ";
        for(int i=0;i<s.size();i++){
             
             if(i==0){
                  last = s[i];                 
             }
             else{
                 if(s[i]>='0'&&s[i]<='9'){
                      cnt += s[i];                
                 }
                 else{
                                                  
                     ans  = stoi(cnt);
                     while(ans--)cout<<last;
                     cnt="0",last=s[i];
                 }
             }
        }
        ans  = stoi(cnt);
        while(ans--)cout<<last;
        //cout <<"Case "<<i<<": "<< ans << endl;
        cout<<"\n";
    }
}