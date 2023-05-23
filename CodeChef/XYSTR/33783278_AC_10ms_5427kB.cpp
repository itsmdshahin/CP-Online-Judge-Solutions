#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--) {
        int p1=0, p2=0;
        string s;
        cin >> s;
        for(int i=0; i<s.size()-1; i++) {
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')) {
                p1++; i++;
            }
        }
        for(int i=1; i<s.size()-1; i++) {
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')) {
                p2++; i++;
            }
        }
        cout << max(p1, p2) << endl;
    }

    return 0;
}
