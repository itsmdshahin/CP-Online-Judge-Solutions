#include <bits/stdc++.h>
#include <iostream>
#include <deque>
#include <stdio.h>

using namespace std;
stack <int> st;
int main()
{
    int n,cnt,k;
    while(true){
        scanf("%d",&n);
        if(!n)break;
        while(true){
            while(!st.empty())st.pop();
            k=0;
            for(int i=0;i<n;i++){
                scanf("%d",&cnt);
                if(!cnt)break;
                while(k < n && k != cnt){
                    if(st.size() > 0 && st.top() == cnt)break;

                    st.push(++k);
                }
                if(st.top() == cnt)st.pop();
            }
            if(!cnt)break;

            if(!st.size()){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        cout << "\n";
    }

}