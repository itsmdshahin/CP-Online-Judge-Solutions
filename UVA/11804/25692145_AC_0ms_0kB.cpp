#include<stdio.h>
#include<string.h>
struct players
{
    char name[25];
    int attack;
    int defence;
}rating[10],temp;
int main()
{
    int tcase,i,j;
    scanf("%d",&tcase);
    for(int l=1;l<=tcase;l++)
    {
        for(i=0;i<10;i++)//input
        scanf("%s %d %d",rating[i].name,&rating[i].attack,&rating[i].defence);

        for(i=0;i<9;i++)//attack && defence sort
        {
            for(j=i+1;j<10;j++)
            {
                if(rating[i].attack<rating[j].attack)
                {
                    temp = rating[i];
                    rating[i]=rating[j];
                    rating[j]=temp;
                }
                if(rating[i].attack==rating[j].attack)
                {
                    if(rating[i].defence>rating[j].defence)
                    {
                        temp = rating[i];
                        rating[i]=rating[j];
                        rating[j]=temp;
                    }
                    if(rating[i].defence==rating[j].defence)
                    {
                        if(strcmp(rating[i].name,rating[j].name)>0)
                        {
                            temp = rating[i];
                            rating[i]=rating[j];
                            rating[j]=temp;
                        }
                    }
                }
            }
        }
        //lexicographically sorting the names
        for(i=0;i<4;i++)
        {
             for(j=i+1;j<5;j++)
             {
                if(strcmp(rating[i].name,rating[j].name)>0)
                {
                    temp = rating[i];
                    rating[i]=rating[j];
                    rating[j]=temp;
                }
             }
        }
        for(i=5;i<9;i++)
        {
             for(j=i+1;j<10;j++)
             {
                if(strcmp(rating[i].name,rating[j].name)>0)
                {
                    temp = rating[i];
                    rating[i]=rating[j];
                    rating[j]=temp;
                }
             }
        }
        printf("Case %d:\n",l);
        printf("(");
        for(i=0;i<5;i++)
        {
            if(i!=4)printf("%s, ",rating[i].name);
            else printf("%s)\n",rating[i].name);
        }
        printf("(");
        for(i=5;i<10;i++)
        {
            if(i!=9)printf("%s, ",rating[i].name);
            else printf("%s)\n",rating[i].name);
        }
    }
    return 0;
}