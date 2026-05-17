#include <iostream>
using namespace std;

int b(int arr[],int size,int key){
    int i = 0 , j = size - 1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            i= mid+1;
        }
        else if(arr[mid]>key){
            j=mid-1;
        }
    }
    return -1;
}

void ls(int arr[],int size,int key){
    int i = b(arr,size,key);
    if (i==-1){
        return;
    }
    int j = i;
    while(i < size && arr[i] == key){
        i++;
    }
    i--;
    while(j>-1 && arr[j]==key){
        j--;
    }
    j++;
    cout<<"first : "<<j<<" last : "<<i<<endl;}

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter the element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    int key;
    cout<<"enter key : ";
    cin>> key;
    
    ls(arr,size,key);

    return 0;
}