#include <stdio.h>
int main(){
    int T, t, W, X, Y, H, L;
    scanf("%d", &T);
    for(t = 1; t <= T; t++){
        H = L = 0;
        if(scanf("%d", &W) == 1 && W){
            scanf("%d", &X);
            while(--W){
                scanf("%d", &Y);
                if(X < Y) H++;
                else if(X > Y) L++;
                X = Y;  
            }
        }
        printf("Case %d: %d %d\n", t, H, L);
    }     
    return 0;
}