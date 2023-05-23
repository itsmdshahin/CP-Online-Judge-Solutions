#include<stdio.h>

int main()
{
    int t,n,i,m,x,b;
    scanf("%d",&t);
    
while(t--)
{
    scanf("%d",&n);
    x=n;
    b=0;
    
    for(i=0;x!=0;i++)
    {
        m=x%10;
        b=b*10+m;
        x=x/10;
    }
    
    
    
    if(n==b)
    printf("wins\n");
    else 
     printf("losses\n");
}
    
    
    
    return 0;
}