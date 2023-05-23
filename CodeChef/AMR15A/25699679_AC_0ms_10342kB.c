#include <stdio.h>
 
int main(void) {    
    int N, e, o, t;
    scanf("%d", &N);
    e=o=0;
    while(N--){
        scanf("%d", &t);
        if(t%2==0)
            e++;
        else
            o++;
    }
    if(e>o)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
} 