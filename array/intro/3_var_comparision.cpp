#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    int z = 30;
    if(x<y && z<y){
        cout<<y<<endl;
    }
    else if(y<x && z<x){
        cout<<x<<endl;
    }
    else if(x<z && y<z){
        cout<<z<<endl;
    }
    return 0;
    //what if i need to compare between 100000000 var i have to use array not conditional statements 
}