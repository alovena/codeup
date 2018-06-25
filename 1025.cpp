#include <iostream>
using namespace std;
int main(void){
	int num[5];
	int num2;
	int i,j=10;
	
int k=10000;
	cin>>num2;
	for(i=0; i<5; i++){		
		num[i]=num2%j;
		num2/=10;
	}
	for(i=4;i>0;i--){
		cout<<"["<<num[i]*k<<"]"<<endl;
		k/=10;
	}
	cout<<"["<<num[i]*k<<"]";
}
