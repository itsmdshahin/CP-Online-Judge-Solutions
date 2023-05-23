#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	    int b,c=0;
	    scanf("%d",&b);
	    while(b!=0){
	        if(b-100>=0)
	        {
	            b=b-100;
	            c++;
	        }
	        else if(b-50>=0)
	        {
	            b=b-50;
	            c++;
	        }
	        else if(b-10>=0)
	        {
	            b=b-10;
	            c++;
	        }
	        else if(b-5>=0)
	        {
	            b=b-5;
	            c++;
	        }
	        else if(b-2>=0)
	        {
	            b=b-2;
	            c++;
	        }
	        else if(b-1>=0)
	        {
	            b=b-1;
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
}

