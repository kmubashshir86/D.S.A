#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < size-1 ; i++){
        swap(arr[i],arr[i+1]);
        i++;

    }

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}