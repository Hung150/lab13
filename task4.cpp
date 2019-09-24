#include<iostream>
using namespace std;
int main(){
    double a[1000];
	int i,n;
	cout<<"enter the number of elements for the array n: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter value "<<i<<" "; cin>>a[i];
	}
	if(n%2==0){
		for(i=1;i<=n/2;i++){
		cout<<a[i]<<" "<<a[n+1-i]<<" ";
	}
    }else{
		for(i=1;i<=n/2;i++){
		cout<<a[i]<<" "<<a[n+1-i]<<" ";
	}
	cout<<" "<<a[(n+1)/2];
	}
}
