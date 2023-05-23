#include<bits/stdc++.h>
using namespace std;
bool binarysearch(long long int  n2,long long int  sd,long long int  n)
{
    long long int  si=0;
    long long int  mid ;
    while(si<=sd)
    {
        mid=(si+sd)/2;
        if(((mid*mid)+(n2*n2))==n)
        {
            return true;
        }
        else if(((mid*mid)+(n2*n2))>n)
        {
            sd=mid-1;

        }
        else
        {
            si=mid+1;
        }
    }
    return false;
}
int main()
{
    long long int t,num,sr,i;
   long long int   f=0;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>num;
        sr=sqrt(num);
        for(i=sr; i>=0; i--)
        {
            if( binarysearch(i,i,num))
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
    }
}