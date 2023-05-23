#include<stdio.h>
#include<string.h>
int main()
{
	int a[26]={0};
	char s[101];
	scanf("%s",s);
	int i;
	int l = strlen(s);
	for(i=0;i<l;i++)
	{
		a[(s[i] - 'a')] = 1;
	}
	int ans=0;
	for(i=0;i<26;i++) ans += a[i];
	if(ans%2 == 0) printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
	return(0);
}