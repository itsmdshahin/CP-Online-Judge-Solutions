#include <stdio.h>

int main()
{
    int t,k,a,count=0;
    scanf("%d %d",&t,&k);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(a % k==0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
