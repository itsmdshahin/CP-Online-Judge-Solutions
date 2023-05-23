#include <stdio.h>
int main() {
	int a,b,c;
	int i[1000000];
	for(a=0;a<1000000;a++){
	    i[a]=0;
	}
	scanf("%d",&b);
	for(a=0;a<b;a++){
	    scanf("%d",&c);
	    i[c]++;
	}
	for(a=0;a<1000000;a++){
	    while(i[a]>0){
	        printf("%d\n",a);
	        i[a]--;
	    }
	}
	return 0;
}