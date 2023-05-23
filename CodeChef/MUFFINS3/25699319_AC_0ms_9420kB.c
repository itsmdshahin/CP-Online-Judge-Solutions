#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        int sum = (a / 2)+1;
        printf("%d\n",sum);
    }
    return 0;
}
