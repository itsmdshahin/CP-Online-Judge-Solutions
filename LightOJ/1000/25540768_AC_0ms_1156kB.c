#include<stdio.h>
int main()
{
   int sum,a,b,t,i;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d %d",&a,&b);
       sum = a + b;
       printf("Case %d: %d\n",i,sum);
   }
   return 0;
}
