#include <iostream>

using namespace std;

int main(){
	
   int n,sum=0;
   
   cout<<"Enter the value of n (should be a positive integer):"<<endl; 
   cin>>n;
   cout<<endl;
   
     int i=1;
     while(i<=n){
	 sum+=i;
	 i++;
     }
	cout<<"The sum of first n natural numbers is: "<<sum;
   return 0;
}
