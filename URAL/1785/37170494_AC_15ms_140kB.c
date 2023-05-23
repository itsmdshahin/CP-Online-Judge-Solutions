#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>=1 && n<=4  )
    {
        printf("few");
    }
    else if(n>=5 && n<=9)
    {
        printf("several");
    }
    else if(n>=10 && n<=19)
    {
        printf("pack");
    }
    else if(n>=20 && n<=49)
    {
        printf("lots");
    }
    else if(n>=50 && n<=99)
    {
        printf("horde");
    }
    else if(n>=100 && n<=249)
    {
        printf("throng");
    }
    else if(n>=250 && n<=499)
    {
        printf("swarm");
    }
    else if(n>=500 && n<=999)
    {
        printf("zounds");
    }
    else
    {
        printf("legion");
    }

}