#include<iostream>
using namespace std;

int m,n;
bool check(){
	int i;
	int from = 0;
	for(i=2;i<n;i++){
		from = (from+m)%i;
	}	
	if(from==0){
		return 1;
	}
	return 0;
}

int main(){
	while(cin>>n,n){
		m=1;
		while(!check()){
			m++;
		}
		cout<<m<<endl;
	}
}