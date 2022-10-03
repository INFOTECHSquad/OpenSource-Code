#include <iostream>

using namespace std;

int main(){
	
    int arr[10],i,max,min;
    

    cout<<"Enter 10 numbers:"<<endl;
    
    for(i=0;i<10;i++)
        cin>>arr[i];
    max=arr[0];
    
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    min=arr[0];
    
    for(i=0;i<10;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<endl;
    cout<<"Maximum Value: "<<max<<endl;
    cout<<"Minimum Value: "<<min<<endl;
    return 0;
}
