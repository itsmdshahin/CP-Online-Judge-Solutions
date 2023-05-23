#include<stdio.h>
int main()
{
    int b,k,n,w,i,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum = sum + i*k;
    }
    if(sum>n)
    {
        b = sum - n;
        printf("%d\n", b);
    }
    else
        printf("0");
}
