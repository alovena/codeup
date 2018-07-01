#include<iostream>
using namespace std;
int main(void){
	/*
	8진수 :  << oct ;
    16진수 : << hex ;
	10진수 : << dec ;
	*/
    int input;
	std::cin>>std::hex>>input;
	std::cout<<std::oct<<input;
	return 0;
}
