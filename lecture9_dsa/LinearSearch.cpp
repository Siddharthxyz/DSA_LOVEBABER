#include <iostream>;
using namespace std;
int search(int arr[],int n,key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      retuen 1;
    }
  }
  retuen 0;
}
int main(){
  int arr[10] = {1, 7, -2, 10, 22, -2, 0, 5,22, 1};
  cout<<"Enter the element to search: ";
  int key;
  cin>>key;

  bool found = search(arr, 10, key);
  
  if (found){
    cout<<"Element found"<<endl;
  }
  else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}