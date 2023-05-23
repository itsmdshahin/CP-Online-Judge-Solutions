#include<bits/stdc++.h>
#define ll long long
#define MX 100000005
using namespace std;
const int N=1e8+1;

vector <ll> vec;
int mark[MX/32+5];
bool check(int N, int pos){
    return (bool)(N & (1<<pos));
}
int Set(int N, int pos){
    return N=N | (1<<pos);
}

void BitwiseSeive()
{
    for(int i=3;i*i<=MX; i+=2){
        if(check(mark[i/32], i%32)==0){
            for(int j=i*i;j<=MX;j+=2*i){
                mark[j/32]= Set(mark[j/32],j%32);
            }
        }
    }
    vec.push_back(2);
    for(int i=3;i<=MX;i+=2){
        if(check(mark[i/32],i%32)==0){
            vec.push_back(i);
        }
    }

}
int main(){
    BitwiseSeive();
    for(ll i=1;i<vec.size();i+=100)cout << vec[i-1]<<endl;
}
