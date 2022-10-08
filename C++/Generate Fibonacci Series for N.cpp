/*  C++ Program to Generate Fibonacci Series for N numbers  */

#include<iostream>
using namespace std;

int main()
{
    int i,no, first=0, second=1, next;

    first=0;
    second=1;

    cout<<"How many terms u want to Display :: ";
    cin>>no;

    cout<<"\nThe Fibonacci series for [ "<<no<<" ] terms are :: \n\n";
    for(i=0; i<no; i++)
    {
        cout<<" "<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    cout<<"\n";

    return 0;
}