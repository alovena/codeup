#include <iostream>
#include<string>
using namespace std;

int main(void){
	string str;
	cin>>str;
	int a =str.length();
	int i=0;
	for(i=0;i<a-1;i++){
		cout <<"'"<<str[i]<<"'"<<endl;	
	}
cout <<"'"<<str[i]<<"'";		
	
}
