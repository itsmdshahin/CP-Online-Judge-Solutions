#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,a,c,b;
    cin >> v >> a >> b >>c;

    v %= (a+b+c);
    //cout << v << " "<< a<<"<<a+b<<""<<a+b+c<<endl;
    if(v<a){
       cout << "F"<<endl;
    }
    else if(v<a+b){
       cout << "M"<<endl;
    }
    else cout << "T"<<endl;

}
