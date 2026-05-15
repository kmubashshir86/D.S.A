#include <iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. " << i+1 <<" : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    cout<<"sum of array is "<<sum<<endl;
    return 0;
}