#include<iostream>
using namespace std;
int main(){
	int ary[1000],i,n;
	cout<<"enter the number of elements for the array n: "; cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter value "<<i<<" "; cin>>ary[i];
	}
	if(n%2==0){
		for(i=1;i<=n/2;i++){
		cout<<ary[i]<<" "<<ary[n+1-i]<<" ";
	}
    }else{
		for(i=1;i<=n/2;i++){
		cout<<ary[i]<<" "<<ary[n+1-i]<<" ";
	}
	cout<<" "<<ary[(n+1)/2];
	}
}
