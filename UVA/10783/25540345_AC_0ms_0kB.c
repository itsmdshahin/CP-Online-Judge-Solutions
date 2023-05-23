#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int a,b,sum=0,i;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i%2)
                sum+=i;
        }
        printf("Case %d: %d\n",j+1,sum);
    }
    return 0;
}
