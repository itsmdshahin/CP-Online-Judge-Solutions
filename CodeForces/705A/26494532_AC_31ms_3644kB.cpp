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
    int t,n,m,i,j,x,y;

        scanf("%d",&t);
        int ans=0;
        int sum=0;
        if(t==1)
        {
            cout<<"I hate it"<<endl;
            return 0;
        }
        for(int i=1;i<=t;i++)
        {
            if(i%2==1)
            {
                if(i==t)
                {
                    cout<<" I hate it"<<endl;
                }
                else
                {
                if(ans==0)
                printf("I hate that");
                else
                    printf(" I hate that");
                    ans++;
                }
            }
            else
            {
                if(i==t)
                    cout<<" I love it"<<endl;
                    else
                    {
                    printf(" I love that");
                    }
            }
        }
}
