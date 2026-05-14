//why to avoid sizeof operator for array travesing
#include <iostream>

using namespace std;

void printarr(int array[],int n);


int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    return 0;
}

void printarr(int array[],int n){
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}