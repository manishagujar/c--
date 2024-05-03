#include <iostream>
#include <vector>
using namespace std;

int main(){

    // vector<int>elements ;
    // elements.push_back(6);
    //  elements.push_back(7);
    //   elements.push_back(7);
    //   elements.push_back(7);
    //     elements.push_back(7);
        
    // cout<<elements.size();
    
    // for(int i =0; i<elements.size();i++){
    //     cout<<elements[i];
    // }
    //   vector<string>elements ;
    elements.push_back("Hello World");
     elements.push_back("Hello World");
      elements.push_back("Hello World");
      elements.push_back("Hello World");
        elements.push_back("Hello World");
        
    cout<<elements.size();
    
    for(int i =0; i<elements.size();i++){
        cout<<elements[i];
    }
    
     vector<int>elements ;
     int a;
     cin>>a;
     
     for(int i=0; i<a;i++){
         int b ;
         cin>>b;
        elements.push_back(b);
        }
}
