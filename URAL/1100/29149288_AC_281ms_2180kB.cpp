
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// cf63a

struct node{
    int id;
    int n;
    int key;
}str[1000000];
bool cmp(node a,node b){
    if(a.n == b.n){
            return a.key<b.key;
    }
    return a.n > b.n;
}
int main(){
    int t;scanf("%d",&t);
    for(int i=0;i<t;i++){
            scanf("%d %d",&str[i].id,&str[i].n);
            str[i].key=i;
    }
    sort(str,str+t,cmp);
    
    for(int i=0;i<t;i++){
            printf("%d %d\n",str[i].id,str[i].n);
    }

}