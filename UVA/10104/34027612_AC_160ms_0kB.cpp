#include<bits/stdc++.h>
#define ll long long
 using namespace std;
int64_t G[3];

 
// Extended Euclidean Algorithm
void ext_gcd(ll a, ll b){
    if(b==0){
        G[0]=a;G[1]=1;G[2]=0;
        return;
    }
    ext_gcd(b,a%b);

    int64_t x = G[1];
    G[0]=G[0];
    G[1]=G[2];
    G[2]= (x-((a/b)*G[2]));
}
int main(){
    ll a,b;
    while(cin >> a>>b){
        ext_gcd(a,b);
        cout << G[1]<<" "<<G[2]<<" "<<G[0] << endl;
    }
 }
