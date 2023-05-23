#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
using namespace std;
bool fu(int a,int b){
                      return a>b;
}
int in() 
{ 
    string s;
    cin >>s;
    int c=0,cnt=0;
    int n=s.size();
    for(int i=0;i<n;i++){
            if(s[i]=='n'){              
                if(s[i-1]=='a' || s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u'||s[i+1]=='\0')c++;
                if(s[i]==s[i-1])c--;
            }
           else cnt++;
    }
   // cout <<n/2<<" "<< c<<" "<<cnt<<" ";
    if(c!=0)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
    
}
int main(){
            int t;cin>>t;
            while(t--){
                                  string s;
                                  cin >>s;
                                  if(s.size()<=10){
                                                        cout <<s<<endl; 
                                  }
                                  else{
                                                        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
                                  }
            }
}