#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"enter positive integer number"; cin>>n;
	if(n<1){ cout<<"error(please enter positive integer)";
	}else{ 
		for(int i=1;i<=n;i++)
		if(i%2==1){ cout<<i;
		}
	}
}
