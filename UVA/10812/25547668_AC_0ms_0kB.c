#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, T;
	long long int a, b;
	
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &n, &m);
		if(m > n)
			printf("impossible\n");
		else {
			b = (n - m)/2;
			a = m + b;
			if(a + b == n && abs(a - b) == m)
				printf("%lld %lld\n", a, b);
			else
				printf("impossible\n");
		}
	}	
	return 0;
}