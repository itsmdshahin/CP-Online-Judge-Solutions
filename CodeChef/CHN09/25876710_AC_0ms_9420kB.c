#include<stdio.h>
void showresult()
{
    char ba[101];
    scanf("%s",ba);
    int len = strlen(ba);
    int i;
    int k = 0,m=0;
    for(i=0;i<len;i++)
    {
        if(ba[i]=='a')
            k++;
        else
            m++;
    }
    if(k>m)
        printf("%d\n",m);
    else
        printf("%d\n",k);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        showresult();
    }
}
