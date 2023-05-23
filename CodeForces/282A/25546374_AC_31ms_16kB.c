#include<stdio.h>

int main()
{
    int n,i,x=0;
    scanf("%d\n",&n);
    char s[n][4];
    for(i=0;i<=n-1;i++)
        gets(&s[i][0]);
    for(i=0;i<=n-1;i++)
    {
        if(s[i][1]=='+')
            x++;
        else
            x--;
    }
    printf("%d\n",x);
    return 0;
}
