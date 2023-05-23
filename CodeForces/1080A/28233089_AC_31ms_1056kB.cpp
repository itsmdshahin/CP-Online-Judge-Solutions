/*
                #we_love_mohammed(saw.)
                #we_love_allah
                #La_ilaha_illallahu_muhammadur_rasulullah
                #we_love_islam
                #Boycott_france_product
                #Boycott_france
                #Boycott_france_product

*/
/*******************************
* BASMILLAHHIR RAHMANNIR RAHIM *
* MD SHAHINUR RAHMAN           *
* DATE:02/nov/2020             *
* DEPT. OF CSE                 *
* LEADING UNIVERSITY, SYLHET   *
*******************************/
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
char wcz[nax];
int w[200],s1=0,s2=0;

bool fu(int a, int b){
    return (a>b);
}
int gcd(int x,int y){
    return x?gcd(y%x, x):y;
}

bool isprime(int x){
   for(int i=2;i<x;i++){
      if(x%i==0)return false;
    }
    return true;
}
void fun1(){
    int a,b,x=0,y=0;
    cin >> a >> b;
    ll s = 2*a;
    ll s2 = 5*a;
    ll s3 = 8*a;
    x += ((s+b-1)/b) + ((s2+b-1)/b) + ((s3+b-1)/b);
    cout << x << endl;

}
int main()
{
    shahin
    /*ll tc,i=1,m=-100000,sum=0,A=0,B=-1000000;
    cin >> tc;
    while(tc--)
    {
   // cout << "Case " << i << ": ";
        fun1();
     //   i++;
    } */

    fun1();
}

