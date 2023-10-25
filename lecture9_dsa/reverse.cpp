#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
  int start = 0;
  int end = n-1;
  while(start<=end){
    swap(arr[start]=arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[5] = {1,2,3,4,5};
  int brr[4] = {6,7,8,9};

  reverseArray(arr,5);
  reverseArray(brr,4);
  
  printArray(arr,5);
  printArray(brr,4);
}