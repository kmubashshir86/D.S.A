#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size :";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to be searched : ";
    cin>>key;   
    
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==key){
            cout<<"element found at index : "<<i;
            return 0;
        }
    }

    cout<<"element found at index -1 "<<endl;
    return 0;
}