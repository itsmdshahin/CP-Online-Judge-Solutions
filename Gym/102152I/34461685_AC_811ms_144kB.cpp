#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int &x:a)  cin>>x;
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(k>0 and a[i]<0){
                k--;
                a[i]=-a[i];
            }
            if(k==0 || a[i]==0){
                break;
            }
        }
        sort(a.begin(),a.end());
        while(k--){
            a[0]=-a[0];
        }
        for(int i=0; i<n; i++)
        {
//            cout<<a[i]<<" \n"[i==n-1];
            sum += a[i];
        }
        cout<<sum<<endl;
    }
}
