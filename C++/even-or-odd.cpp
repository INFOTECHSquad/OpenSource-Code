#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<<"Enter a number:"<<endl;
	cin>>num;
	cout<<endl;
	
	if(num%2==0){
		cout<<"The number is Even"<<endl;
	}
	else{
		cout<<"The number is Odd"<<endl;
	}
	return 0;
}
