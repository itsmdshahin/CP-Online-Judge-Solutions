#include <stdio.h>

int main()
{
	int t;
	char c;
	int count;
	scanf("%d",&t);
	while(t--)
	{
	    count=0;
	    while(c<=32)
        {
            c=getchar_unlocked();
        }
        while(c>32)
        {
            if(c==52)
                count++;
            c=getchar_unlocked();
        }
        printf("%d\n",count);
	}
}