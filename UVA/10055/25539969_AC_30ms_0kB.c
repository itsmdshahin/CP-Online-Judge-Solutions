#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
    if(b>a)
        printf("%lld\n",b-a);
    else
        printf("%lld\n",a-b);
    }
    return 0;
}
