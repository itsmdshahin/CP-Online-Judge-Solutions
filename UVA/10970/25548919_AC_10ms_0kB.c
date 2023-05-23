#include<stdio.h>
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)==2){
            int a,b,sum;
            a = n-1;
            b = m - 1;
    sum = a + b * n;
		printf("%d\n",sum);
	}
	return 0;
}
