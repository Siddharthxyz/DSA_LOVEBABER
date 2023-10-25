#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter size"<<endl;
  cin>>n;
  int arr[10];
  int sum = 0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    
  }
  cout<<sum<<endl;
}