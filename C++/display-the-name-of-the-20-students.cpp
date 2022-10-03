#include <iostream>

using namespace std;

struct student
{
    string name;
    int num;
} s[20];

int main(){
	string name;
	
    cout<<"Enter name of students:"<<endl;
	cout<<endl;
	
    for(int i=0;i<20;++i)
    {
        s[i].num=i+1;

        cout<<"Student #"<<s[i].num<<".) ";
        getline(cin,s[i].name);
    }
    cout<<"\n\n\n";
    cout<<"Students Name:"<<endl;
	cout<<endl;
	
    for(int i=0;i<20;++i)
    {
        cout<<s[i].num<<".) "<<s[i].name<< endl;
    }
    return 0;
}
