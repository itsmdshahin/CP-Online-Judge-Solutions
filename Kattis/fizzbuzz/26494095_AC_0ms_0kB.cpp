#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#include <string.h>
#include<set>

#define ll long long int
using namespace std;
int main()
{

    ll n,a,b,c,m=0;
    cin >> a >> b >> c;

    for(int i=1;i<=c;i++){
        if(i % a==0 && i % b==0){
            cout <<"FizzBuzz" << endl;
        }
        else if(i % a==0){
            cout <<"Fizz" << endl;
        }
        else if(i % b==0){
                cout << "Buzz" << endl;
        }
        else cout << i << endl;

        }


}
