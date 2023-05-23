#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
#include<math.h>
#define shahin std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
const int nax=1000*1007;
const int mod = 1e9 + 7;
int ar[120][120];
using namespace std;

typedef pair<int, int> P;
 
vector<P> v;//store the priority of each element and whether this file is its own;
 
void init() {
    v.clear();
}
 
void input(const int n, const int m) {
    int num;
    for (int i = 0;i < n;++i) {
        cin >> num;
                 if (i == m) {// is its own file;
            v.push_back(P(num, 1));
        }
        else {
            v.push_back(P(num, 0));
        }   
    }
}
 
int priority_queue_moni(int n, int m) {
    int ans = 0;
    while (!v.empty()) {
                 int maxnum = 0; // current maximum priority;
        for (vector<P>::iterator it = v.begin();it != v.end();++it) {
            if (it -> first > maxnum) {
                maxnum = it -> first;
            }
        }
        int i = 0;
        while (!v.empty()) {
            P p = v[i];
                         if(p.first == maxnum){//current highest priority;
                ++ans;
                                 v.erase(v.begin());//Processing completed;
                                 if (p.second == 1) {// is its own file;
                    return ans;
                }
                                 break; // the priority within the current vector has changed;
            }
            else {
                                 v.erase(v.begin());//delete the current node;
                                 v.push_back(p);//insert to the end;
            }
        }
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        init(); 
        input(n, m);
        int ans = priority_queue_moni(n, m);
        cout << ans << endl;
    }
    return 0;
}