#include <stdio.h>

int main()
{
    int a;
    float b,sum;

    scanf("%d %f",&a,&b);

    if(a+0.5>b)
        printf("%.2f\n",b);
    else if(a%5!=0)
          printf("%.2f\n",b);
    else {
        printf("%.2f\n",(b-a)-0.5);
    }

    return 0;
}
