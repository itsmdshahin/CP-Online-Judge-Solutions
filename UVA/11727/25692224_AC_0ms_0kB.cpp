/*******************************
* BISMILLAHHIR RAHMANIRE RAHIM *
* ============================ *
*  MD SHAHINUR RAHMAN          *
*  B.Sc in CSE                 *
*  LEADING UNIVERSITY          *
*  SYLHET , BANGLADESH.        *
*  SUBMISSION DATE:-24/04/2020 *
********************************/

#include<stdio.h>

int main()
{
    int T, N, current, max,a,b,c;

    scanf("%d", &T);

    for (int t = 1; t <= T; ++t)
    {
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a>b && a<c || a<b && a>c)
                max=a;
            else if(b>a && b<c || b<a &&b>c)
                max=b;
            else if(c>a &&c<b || c<a && c>b)
                max=c;
        }

        printf("Case %d: %d\n", t, max);
    }
}
