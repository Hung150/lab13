#include<iostream>
using namespace std;
int main(){
	long n,count;
	double n1,r;
	cout<<"enter n(n>1): "; cin>>n;
	cout<<"enter the first term: "; cin>>n1;
	cout<<"enter the common ratio: ";cin>>r;
	cout<<n1<<" ";
	if(n<2){ cout<<"error(please enter n>1)";
	}else{
		for(count=1;count<n;count++){
			n1*=r;
			cout<<n1<<" ";
		}
	}
}
