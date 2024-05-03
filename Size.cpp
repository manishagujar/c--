// #include <iostream>
// using namespace std;

// int main (){

//     cout<<sizeof(char)<<"byte"<<endl;
//     cout<<sizeof(int)<<"byte"<<endl;
//     cout<<sizeof(bool)<<"byte"<<endl;
//     cout<<sizeof(float)<<"byte"<<endl;
//     cout<<sizeof(double)<<"byte"<<endl;
// }
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter number for adding values ";
    cin>>number;
    int arr[number];
    int add=0;
    
 for(int i=0;i<number;i++){
     cout<<"Add value";
     cin>>arr[i];
 }
 for(int i=0;i<number;i++){
    add +=arr[i];
 }
 cout<<"total is "<<add<<endl;

    float avg=add/number;
cout<<"avarge is "<<avg;
}

