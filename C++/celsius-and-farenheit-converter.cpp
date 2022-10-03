#include <iostream>

using namespace std;

int main(){

    double fahrenheit,celcius;
    char choice;
    
    cout<<"Enter F to convert to Fahrenheit or C to convert to Celsius:"<<endl;
	cin>>choice;

    if(choice=='C'||choice=='c'){
        cout<<"Enter the Fahrenheit value:"<<endl; 
		cin>>fahrenheit;
		cout<<endl;
        celcius=(fahrenheit-32)/1.8;
        cout<<"It is "<<celcius<<" degree celcius"<<endl;
    }
    else if(choice=='F'||choice=='f'){
        cout<<"Enter the Celcius value:"<<endl;
		cin>>celcius;
		cout<<endl;
        fahrenheit=(1.8*celcius)+32;
        cout<< "It is "<<fahrenheit<<" degree Fahrenheit"<<endl;
    }
    else{
        cout<<"You must enter C to convert to Celsius or F to convert to Fahrenheit!"<<endl;
    }
    return 0;
}
