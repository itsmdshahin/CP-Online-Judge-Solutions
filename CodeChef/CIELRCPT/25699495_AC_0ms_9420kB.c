#include <stdio.h>
int main(void) 
{
	int p,n,t;
	int count;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&p);
	    count=0;
	    if(p>2048)
		{
			count += p/2048;
			p = p % 2048;
		}
		while(p != 0){
		    if(p % 2)
			count++;
			p = p / 2;
		}
	   	printf("%d\n",count); 
	}
	return 0;
}
