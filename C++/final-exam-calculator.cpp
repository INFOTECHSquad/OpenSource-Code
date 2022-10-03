#include <iostream>

using namespace std;

int main(){
	
	int num1,num2,sum,min,mul,div,mod;
	
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	cout<<endl;
	sum=num1+num2;
	min=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	cout<<"The sum is: "<<sum<<""<<endl;
	cout<<"The difference is: "<<min<<""<<endl;
	cout<<"The product is: "<<mul<<""<<endl;
	cout<<"The quotient is: "<<div<<""<<endl;
	cout<<"The modulus is: "<<mod<<""<<endl;
	return 0;
}
