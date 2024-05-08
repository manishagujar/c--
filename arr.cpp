#include <iostream>
using namespace std;

int main()
{
   int arr[]={1,2,3,4,5,6,7,8};
   int len=size(arr);
    for(int i=0;i<len;i++){
    cout<<arr[i];
  }
  cout<<endl;
  for(int i =len- 1; i>=0;i--){
    cout<<arr[i]<<endl;
}
}

