#include<iostream>
using namespace std;
main(){
	double a[1000];
	int n,i,j,t;
	cout<<"enter the number of elements for the array n: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter value "<<i<<" "; cin>>a[i];
	}
	for(i=1;i<=n;i+=2){
		for(j=i+2;j<=n;j+=2){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		cout<<a[i]<<" ";
	}
	for(i=2;i<=n;i+=2){
		for(j=i+2;j<=n;j+=2){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		cout<<" "<<a[i]<<" ";
	}
}
