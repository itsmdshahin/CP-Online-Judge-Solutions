#include<bits/stdc++.h>
#include<vector>
#include<cstdio>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
const int nax=1000*1007;
const int mod = 1e9 + 7;
const long mx=1e8;
bool prime[mx];
using namespace std;
int dp[10000];


int main() {

     shahin
     long long N, Answer, i;

    int counter;

    while (cin>>N && N != 0){

        if (N < 0)
            N *= -1;

        Answer = -1;
        counter = 0;

        for ( i = 2; i*i <= N && N != 1; i++) {
            while (N%i == 0){
                N /= i;
                Answer = i;
            }
            if (Answer == i){
                counter++;
            }
        }


        if (N != 1 && Answer!=-1)
            Answer = N;
        else if(counter == 1)
            Answer = -1;

        cout<<Answer<<endl;
     }

}

