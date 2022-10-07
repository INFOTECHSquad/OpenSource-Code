// swap the positions of odd and even places

#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int temp;

    
    for(int i=0; i<=9; i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}