// Contrinbuted by : RajatRathore123-github
// Date : 3-10-2022

#include<iostream>
using namespace std;

// given arrays must be sorted
// function to handle duplicates

void distinct(int arr[],int p, int &x){
  do{
    ++x;
  }while(x < p && arr[x-1] == arr[x]);
}

void Union(int arr1[], int arr2[],int m, int n){
  int i = 0, j = 0;
  while(i < m && j < n){
    if(arr1[i] < arr2[j]){
      cout << arr1[i] << " ";
      distinct(arr1,m,i);
    }
    else if(arr1[i] > arr2[j]){
      cout << arr2[j] << " ";
      distinct(arr2,n,j);
    }
    else{
      cout << arr1[i] << " ";
      distinct(arr1,m,i);
      distinct(arr2,n,j);
    }
 }
 while(i < m){
   cout << arr1[i] << " ";
   distinct(arr1,m,i);
 }
 while(j < n){
   cout << arr2[j] << " ";
   distinct(arr2,n,j);
 }
}

int main(){
  int arr1[] = {1,2,2,2,3};
  int arr2[] = {2,3,3,4,5,5};
  int m = sizeof(arr1) / sizeof(int);
  int n = sizeof(arr2) / sizeof(int);

  Union(arr1,arr2,m,n);

}
