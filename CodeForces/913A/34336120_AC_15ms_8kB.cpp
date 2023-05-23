
#include<bits/stdc++.h>
#include <stack>
#define ll long long
using namespace std;

void fun(){
    int n,m;cin >> n>>m;
    int sum = pow(2,n);
    cout << m%sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fun();

}
