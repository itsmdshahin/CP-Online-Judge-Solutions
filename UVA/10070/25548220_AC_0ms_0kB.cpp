#include <cstdio>
#include <iostream>
using std::cin;
#define MAX_LEN 100000
char input[MAX_LEN];

int bigNumberMod(char *in , int divisor) {
    int mod = 0;
    for (char *p = in; *p; p++) {
      mod = (mod * 10 + (*p - '0')) % divisor;
    }
    return mod;
}

int main() {
    int print = 0;
    while (cin >> input) {

        bool isLeap = false;
        bool isFestival = false;

        // 避免了给最后一组数据加上空行
        if ( print != 0 )
            printf("\n");
        print = 1;

        if (bigNumberMod(input, 4) == 0 && bigNumberMod(input, 100) != 0 || bigNumberMod(input, 400) == 0) {
            printf("This is leap year.\n");
            isLeap = true;
        }

        if ( 0 == bigNumberMod(input, 15) ) {
            printf("This is huluculu festival year.\n");
            isFestival = true;
        }

        if (isLeap && (0 == bigNumberMod(input, 55))) {
            printf("This is bulukulu festival year.\n");
            isFestival = true;
        }

        if (!isLeap && !isFestival) printf("This is an ordinary year.\n");
    }
    return 0;
}