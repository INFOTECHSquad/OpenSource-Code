#include <iostream>

using namespace std;

int main(){

	double temperature;
	
	cout<<"Enter a temperature in Farenheit:"<<endl;
	cin>>temperature;
	cout<<endl;
	
	if(temperature<32){
	cout<<"the temperarature is below freezing point";
	}else if(temperature>32){
	cout<<"the temperarature is above freezing point";
	}else{
	cout<<"the temperarature is the Freezing point";
	}
	return 0;
	}
