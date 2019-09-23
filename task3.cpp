#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,n1,n2,count,a[count];
	cout<<"enter n(n>2): "; cin>>n;
	cout<<"enter the first term: "; cin>>n1;
	cout<<"enter the second term: "; cin>>n2;
	if(n<3){ cout<<"error";
	}else{
	a[1]=n1;
	a[2]=n2;
	cout<<a[1]<<" ";
	cout<<a[2]<<" ";
	for(count=3;count<=n;count++){
		a[count]=pow(2,count-3)*(n1+n2);
		cout<<a[count]<<" ";
	}
	}
}
