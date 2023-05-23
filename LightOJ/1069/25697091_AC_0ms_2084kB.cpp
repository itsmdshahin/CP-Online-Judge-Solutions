#include<bits/stdc++.h>
using namespace std;

int main(){

    int tstCase;
    cin >> tstCase;
    for(int i = 1; i <= tstCase; i++){
        int myPos,leftPos,des;
        cin >> myPos >> leftPos;
        des = (int)abs((double)myPos-leftPos);
        cout << "Case " << i << ": " << (des*4)+19+(myPos*4) << endl;
    }
    return 0;
}