#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,fact;
        scanf("%d %d %d",&a,&b,&i);
        if(a+b+i==180)
            printf("YES\n");
        else
            printf("NO\n");


    }
    return 0;
}
