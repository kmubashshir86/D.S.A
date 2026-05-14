//why to avoid sizeof operator for array travesing
#include <iostream>

using namespace std;

void printarr(int array[]);


int main(){
    int arr[]={1,2,3,4,5};
    printarr(arr);
    return 0;
}

void printarr(int array[]){
    for(int i = 0 ; i < sizeof(array)/sizeof(array[0]) ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}