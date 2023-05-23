#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,fact;
        scanf("%d %d",&a,&b);
        if(a>b) printf("%d ",a);
        else printf("%d ",b);
        printf("%d\n",a+b);
    }
    return 0;
}
