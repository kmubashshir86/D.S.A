#include <iostream>

using namespace std;

int main(){ 
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    int j = 1;
    for(int &i : arr){
        cout<<"enter element no. "<<j<<": ";
        cin>>i;
        j++;
    }
    int start = 0 , end = size - 1;
    int key;
    cout<<"enter key : ";
    cin>>key;
    
    while(start<=end){
        int mid = (start + end )/2;
        if(arr[mid] == key){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]< key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
    }
    cout<<-1<<endl;
    return 0;
}