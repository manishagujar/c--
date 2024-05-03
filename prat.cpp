#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No of coffees you want to add : "<<endl;
    cin>>n;
    
    string name[n] = {};
    int price[n] = {};
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter name of coffee : "<<endl;
        cin>>name[i];
        
        cout<<"Enter price of coffee : "<<endl;
        cin>>price[i];
    }
    cout<<endl;
    cout<<"*************** Select Coffee *****************"<<endl;
     
    for(int i=0;i<n;i++){
        cout<<i+1<<". "<<name[i]<<" "<<"₹ "<<price[i]<<endl;
    }
    
    int which;
    cout<<endl;
    cout<<"Enter which coffee you want : ";
    cin>>which;
    
    int quantity;
    
    for(int i=0;i<n;i++){
        if(which==i+1){
            cout<<"Enter the quantity of coffee : ";
            cin>>quantity;
            cout <<" ₹ "<< (price[i] * quantity) * 1.18 << endl;

        }
}
}