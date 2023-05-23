#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector<int > a(n);
for(int j=0;j<n;j++){
    cin >> a[j];
}
sort(a.begin(), a.end());
    if(a.front()==a.back()){
    cout << n << endl;
    }
    else{
    cout << 1<<endl; 
    }
}
}