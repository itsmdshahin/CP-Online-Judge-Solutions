#include<stdio.h>
int main()
{
    int t,count=0,i,n;
    while(scanf("%d",&t),t) {
        count++;
        int sum=0;
        for(i=0;i<t;i++) {
        scanf("%d",&n);
        if(n > 0)
            sum++;
        else
            sum--;
        }
        printf("Case %d: %d\n",count,sum);
    }
}
