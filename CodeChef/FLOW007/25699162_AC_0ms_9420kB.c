#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,sum=0,digit;
        scanf("%d",&a);
        while(a!=0)
        {
            digit=a%10;
            sum = sum*10 + digit;
            a = a / 10;
        }
        printf("%d\n", sum);

    }
    return 0;
}
