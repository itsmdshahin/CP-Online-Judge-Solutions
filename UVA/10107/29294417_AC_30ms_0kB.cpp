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

ll a[10000010],indx=0;
void InsertionSort()
{
    int k,ptr,temp,j;
    if(indx<2)
        return;
    for(k=2;k<=indx;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
}
int main() {
    ll pos,ans,n;
    
    while(cin>> n && n!=0){
            ans=0;
            indx += 1;
            a[indx] = n;
            InsertionSort();
            if(indx%2==0){
              pos = indx/2;
              ans = (a[pos] + a[pos+1])/2;                    
            }else{
              pos = (indx+1)/2;
              ans = a[pos];                    
            }
            cout << ans << endl;
    }
    return 0;
}