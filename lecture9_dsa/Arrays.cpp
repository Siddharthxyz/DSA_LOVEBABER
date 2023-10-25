#include <iostream>
using namespace std;
//print with function
void printArray(int arr[],int size){
  cout<< "Printing the array" << endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  //array declaration,size,input values
  int arr[5]={1,2,3,4,5};
  //print array
  cout<<arr[0]<<endl;
  char ch[5]={'a','b','c','d','e'};
  cout<<ch[3]<<endl;
  cout<< "Printing the array" << endl;
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  
}