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
bool fu(int a,int b){
                      return a>b;
}
void InsertionSort();
int a[10005],indx;
int main()
{
    long int n,i,position,median;
    indx=0;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        median=0;
        indx=indx+1;
        a[indx]=n;
        InsertionSort();
        if(indx%2==0)
        {
            position=indx/2;
            median=(a[position]+a[position+1])/2;
        }
        else
        {
            position=(indx+1)/2;
            median=a[position];
        }
        printf("%ld\n",median);
    }
    return 0;
}
 
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