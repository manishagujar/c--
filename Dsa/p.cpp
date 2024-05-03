#include <iostream>
using namespace std ;

int main(){

  int num[8] = {};
  int size = 8;
  int start = 0;
  int end = size - 1;

  while(true){
    if(start>end){
      break;
    }
  else{
    cout<<num[start];
    cout<<num[end];
    start++;
    end--;
 }
}
}