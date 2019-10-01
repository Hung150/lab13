#include<iostream>
using namespace std;
main(){
	int n,i;
	cout<<"enter positive integer number"; cin>>n;
	if(n<1){ cout<<"error(please enter positive integer)";
	}else{ 
		for(i=1;i<=n;i++)
		if(i%2==1){ cout<<i;
		}
	}
}
