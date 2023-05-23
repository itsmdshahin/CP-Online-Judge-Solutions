#include <iostream>
#include <string>
#define ll long long int 
using namespace std;

int main() {
	ll t,c=0,sum;
	ll s1=0,s2=0;
	cin >> t;
	
	while(t!=0){
	    c++;
	    if(c%2==0){
	        s1+= t%10;
	    }
	    else {
	        s2 += t%10;
	    }
	    t /= 10;
	}
    sum = s1*s2;
	cout << sum << endl;
	return 0;
}
