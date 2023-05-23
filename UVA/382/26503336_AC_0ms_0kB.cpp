#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#include <string.h>
#include<set>
#include<math.h>

#define ll long long int
using namespace std;

int main() {
    int x;
    puts("PERFECTION OUTPUT");
    while(scanf("%d", &x) == 1 && x) {
        int i, j;
        int sum = 1, sq = (int)sqrt(x);
        for(i = 2; i <= sq; i++) {
            if(x%i == 0) {
                j = x/i;
                sum += i+j;
            }
        }
        printf("%5d  ", x);
        if(x == 1)             puts("DEFICIENT");
        else if(sum == x)    puts("PERFECT");
        else if(sum < x)    puts("DEFICIENT");
        else                puts("ABUNDANT");
    }
    puts("END OF OUTPUT");
}
