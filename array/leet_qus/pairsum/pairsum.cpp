#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no ."<< i+1 << " : ";
        cin>>arr[i];
    }
    int sum ;
    cout<<"enter sum : ";
    cin>>sum;

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(arr[i]+arr[j]==sum){
                cout<<'('<<arr[i]<<','<<arr[j]<<')';
                arr[j]=INT_MIN;
                break;
            }
        }
    }

    return 0;
}