#include<stdio.h>
int main(){
	unsigned long long i;
	while(scanf("%llu",&i)==1){
		if(i==0) break;
		char str[100];
		int index;
		int count;
		unsigned long long j;
		for(j=1;j<=i;j<<=1);	
		j>>=1;
		for(index=count=0;j>0;j>>=1){
			if(i>=j){
				str[index++]='1';
				count++;
				i-=j;
			}
			else
				str[index++]='0';
		}
		str[index]='\0';		
		printf("The parity of %s is %d (mod 2).\n",str,count);
	} 
	return 0;
}