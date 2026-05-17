#include <iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" :";
        cin>>arr[i];
    }
    int key;
    cout<<"enter key :";
    cin>>key;
    int i = 0 ;
    int j = size-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key){
            i++;
        }
        else if(arr[mid]>key){
            j=mid-1;
        }
        else if(arr[mid]<key){
            i=mid+1;
        }
    }
    int last=--i;
    i = 0 ;
    j = size-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key){
            j=mid-1;
        }
        else if(arr[mid]>key){
            j=mid-1;
        }
        else if(arr[mid]<key){
            i=mid+1;j--;
        }
    }
    int first = i;
    cout<<key<<" occur in array "<<last-first+1<<" times "<<endl;
    return 0;
}