#include<bits/stdc++.h>
using namespace std;
int n(){
    int t,total,cnt;
    cin >> t;
    cin.get();
    while(t--){
        string s,s1;
        getline(cin ,s);
        istringstream token(s);
        cnt=0;
        token >> s1;
        while(token){
            cnt++;
            token>>s1;
        }
        cout << cnt << endl;
    }
}
int  main(){
        int t;cin >> t;
        cin.get();
        for(int z=1;z<=t;z++){

           string s,t;
           //cin >> s;
           getline(cin,s);

           //cin >> t;
           getline(cin,t);
     //616A
     ///page 138,book 162
       //Q:-P3-1A

           if(s==t)cout << "Case "<<z<<": "<<"Yes\n";
           else{
                          auto p=remove(s.begin(),s.end(),' ');
                           s.erase(p,s.end());
                           if(s==t)cout<<"Case "<<z<<": "<<"Output Format Error\n";
                            else cout <<"Case "<<z<<": "<<"Wrong Answer\n";
           }
        }
}




