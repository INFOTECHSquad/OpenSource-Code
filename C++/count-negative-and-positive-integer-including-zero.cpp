#include <iostream>

using namespace std;
 
int main(){
	
    int input[100],count,i,nCount=0,pCount=0,zCount=0;
       
    cout<<"How many numbers are you going to input?"<<endl;
    cin>>count;
    cout<<endl;
    cout<<"Enter "<<count<<" numbers:"<<endl;
      
    for(i=0;i<count;i++){
        cin>>input[i];
    }  
    for(i=0;i<count;i++){
        if(input[i]<0){
            nCount++;
        }else if(input[i]>0){
            pCount++;
 }else{
     zCount++;
 }
    }
    cout<<endl;
    cout<<"Number of Negative Numbers: "<<nCount<<endl;
    cout<<"Number of Positive Numbers: "<<pCount<<endl;
    cout<<"Number of Zeroes: "<<zCount<<endl;
    return 0;
}
