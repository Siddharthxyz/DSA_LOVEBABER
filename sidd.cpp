#include <iostream>
using namespace std;
int main(){
  int a=1330;
  int rs100,rs50,rs20,rs1;
  int b=0;
  switch(1){
    case 1:a=a%100;
          b=a/100;
          cout<<b<<endl;
    case 2:a=a%50;
          b=a/50;
          cout<<b<<endl;
    case 3:a=a%20;
          b=a/20;
          cout<<b<<endl;
    case 4:a=a%1;
          b=a/1;
          cout<<b<<endl;
  }

}