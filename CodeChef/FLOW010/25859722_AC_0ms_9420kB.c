#include<stdio.h>
int main()
{
	char ch;
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		scanf("%c",&ch);
		getchar();
		if(ch=='B' || ch=='b')
			printf("BattleShip\n");
		else if(ch=='C' || ch=='c')
			printf("Cruiser\n");
		else if(ch=='D' || ch=='d')
			printf("Destroyer\n");
		else if(ch=='F' || ch=='f')
			printf("Frigate\n");
	}
}
