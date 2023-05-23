#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int  main(){
    int t,z=1;cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        char last;
        string cnt="";
         cout << "Case "<<z<<": ";
        for(int i=0;i<s.size();i++){
            if(i==0)last=s[i];
            else{
                if(s[i]>='0' && s[i]<='9')cnt+=s[i];
                else{
                    int times = stoi(cnt);
                    while(times--)cout<<last;
                    last = s[i],cnt = "0";
                }
            }
        }
        int times = stoi(cnt);
        while(times--)cout<<last;
        z++;
        cout << endl;
        }
}
