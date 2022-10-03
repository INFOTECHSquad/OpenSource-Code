#include <iostream>

using namespace std;

int main(){
	
	int grade;

	cout<<"Please enter the grade of the student:"<<endl;
	cin>>grade;
	cout<<endl;
	
	if(grade==100){
		cout<<"Excellent";
	}else if(grade<=99&&grade>=90){
		cout<<"Very good";
	}else if(grade<=89&&grade>=80){
		cout<<"Good";
	}else if(grade<=79&&grade>=75){
		cout<<"Fair";
	}else if(grade<=74){
		cout<<"Failed";
	}else{
		cout<<"input valid grade";
}
return 0;
}
