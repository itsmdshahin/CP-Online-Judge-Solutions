#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,len;
    char text[1000],n;
    char ar[]="`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
    gets(text);
    len=strlen(text);
    for(i=0; i<len; i++)
    {
        n=tolower(text[i]);
        if(n!='`'&& n!='q'&&n!='a'&&n!='z'
                &&n!='w'&&n!='s'&&n!='x')
        {
            for(j=0; j<=46; j++)
            {
                if(n==' ')
                {
                    printf(" ");
                    break;
                }
                if(n==ar[j])
                {
                    printf("%c",ar[j-2]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}