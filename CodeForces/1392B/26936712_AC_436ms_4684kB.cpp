#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<iomanip>
#include <string.h>
#include<set>

#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >>t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    if(k> 1){
	        k = 2+k%2;
	    }
	    while(k--){
	        int mx = -1000000000;
	        for(int i=0;i<n;i++){
	            mx = max(mx, a[i]);
	        }
	        for(int i=0;i<n;i++){
	            a[i] = mx-a[i];
	        }
	
	    }
	    for(int i=0;i<n;i++){
	            cout << a[i];
	            if(i+1==n)cout<<"\n";
	            else cout << " ";
	        }
    }

}
