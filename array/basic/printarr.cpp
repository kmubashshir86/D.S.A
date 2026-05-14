#include <iostream>

using namespace std;

void printarr(int array[],int n);


int main(){
    const int n = 5;
    int arr[n]={1,2,3,4,5};
    printarr(arr,n);
    return 0;
}

void printarr(int array[],int n){
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}