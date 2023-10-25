#include <iostream>
#include<climits>//when we use min and max
using namespace std;

int getMin(int num,int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(num[i]<min){
      min=num[i];
    }
  }
  //returning min value
  return min;
}

int getMax(int num[], int n){
  int max =INT_MIN;  //minimun value
  for(int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  //returning max value
  return max;
}

int main() {
  
  int size;
  cin>>size;
  int num[100];
  
  for(int i=0;i<size;i++){
    cin>>num[i];
    
  }
  //printing return value
  cout<<"MAXIMUM VALUE IS"<<getMax(num,size)<<endl;
  cout<<"MAXIMUM VALUE IS"<<getMin(num,size)<<endl;
  
}