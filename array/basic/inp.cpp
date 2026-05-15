#include <iostream>

using namespace std;

int* inparr(){
    cout<<"enter size";
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    return arr;
}