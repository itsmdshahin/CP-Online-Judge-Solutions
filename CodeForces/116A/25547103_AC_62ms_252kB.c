#include <stdio.h>

int main()
{
	int a,b,c,sum=0,m;
	scanf("%d",&m);
	int arr[m];
	for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        sum = sum - a+b ;
        arr[i]= sum;
    }
    c = arr[0];
    for(int j=0;j<m;j++)
    {
        if(c<arr[j])
            c = arr[j];
    }
    printf("%d\n",c);
	return 0;
}
