#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a >>b>>c;
    if(a==0 && b==0 && c==0)cout << 0 << endl;
    else if(a < b && b>c && (b-a) > c)cout<<"-\n";
    else if(a>b && a> c && (b+c)<a)cout << "+" << endl;
    else if(a==b && a>c && b>c && (b+c)<=a)cout << "0";
    else cout << "?";
}
