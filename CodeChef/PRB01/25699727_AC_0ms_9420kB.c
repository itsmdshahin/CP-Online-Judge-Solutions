#include <stdio.h>
#include <math.h>

int main() {
    int t;
    long long int n,a,b;
    scanf("%d",&t);
    if(t>0){
        while(t--){
        scanf("%lld",&n);
        if(n>=2){
            b=1;
            for(a=2;a<=sqrt(n);a++){
                if(n%a==0){
                    b=0;
                    printf("no");
                    break;
                }
            }
            if(b==1){
                printf("yes");
            }
        }
        else{
            printf("no");
        }
        printf("\n");
    }
  }
  return 0;
}

