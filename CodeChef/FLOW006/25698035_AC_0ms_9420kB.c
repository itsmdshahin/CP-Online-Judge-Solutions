#include <stdio.h>

int main()
{
    int a,b,t,n;
    scanf("%d",&t);
    while(t--)
   {
       int sum=0,temp;
        scanf("%d",&a);
        n=a;
        while(n!=0){
        temp= n%10;
        sum = sum + temp;
        n = n / 10;
        }

        printf("%d\n",sum);
   }


    return 0;
}
