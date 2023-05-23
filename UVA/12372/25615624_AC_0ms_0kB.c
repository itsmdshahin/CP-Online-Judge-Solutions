#include<stdio.h>
int main()
{
    int t,a,b,c,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<21&&b<21&&c<21)
            printf("Case %d: good\n",++i);
        else
            printf("Case %d: bad\n",++i);
    }
}
