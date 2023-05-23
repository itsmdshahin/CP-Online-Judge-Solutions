#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       int rem = a % b;
       printf("%d\n",rem);
   }
    return 0;
}
