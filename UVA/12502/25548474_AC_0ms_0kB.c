#include<stdio.h>
#include<math.h>
int main(){

double r,a, x,y,z;
int i,n;

scanf("%d",&n);
for(i=1;i<=n;i++)
{

  scanf("%lf%lf%lf",&x,&y,&z);
{
    r=z/(x+y);
    a=x*r+(x-y)*r;
}

printf("%.0lf\n",a);
}

return 0;

}
