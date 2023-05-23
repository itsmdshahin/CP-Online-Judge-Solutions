#include<stdio.h>

int main()
{
    int testcase, a,b,c, i, avg;
    while(scanf("%d",&testcase)==1)
    {
        for(i=1;i<=testcase;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((b>a && b<c)||(b<a && b>c))
                avg=b;
            else if((c>a && c<b)||(c<a && c>b))
                avg=c;
            else
                avg=a;
            printf("Case %d: %d\n",i,avg);
        }
    }
    return 0;
}
