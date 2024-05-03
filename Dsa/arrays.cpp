#include <iostream>
using namespace std;
int main(){
    int value[5];
    
    for(int i=0;i<5; i++){
        cin>>value[i];
    }

for(int i=0;i<5; i++){
    value[i]=value[i]*2;
}

for(int i=0;i<5; i++){
    cout<<value[i]<<endl;
}

}