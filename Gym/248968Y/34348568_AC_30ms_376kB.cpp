#include<bits/stdc++.h>
#include <stack>
#define ll long long
ll MX = 1e9;
using namespace std;

int genFibonacci(int n)
{
    int fibo[n+2];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = (fibo[i-1] + fibo[i-2])%998244353;
    }
    return fibo[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //  fun();
    ll n;
    cin >>n;
    cout << genFibonacci(n)%998244353 << endl;

}
