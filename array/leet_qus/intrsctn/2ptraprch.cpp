#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size_1;
    int size_2;
    cout<<"enter size1,size2 :";
    cin>>size_1>>size_2;
    int arr[size_1];
    int ARR[size_2];
    for(int i = 0 ; i < size_1; i++){
        cout<<"enter element of arr element no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i = 0 ; i < size_2; i++){
        cout<<"enter element of ARR element no. "<<i+1<<" : ";
        cin>>ARR[i];
    }
    int i = 0 , j =0 ;
    while(i < size_1 && j<size_2){
        if(arr[i]==ARR[j]){
            ARR[j]=INT_MIN;
            cout<<arr[i]<<" ";
            i++;j++;}

        else if(ARR[j]>arr[i]){
            i++;
            break;
        }
        else if(ARR[j]<arr[i]){
            j++;
        }
    }
    cout<<endl;
    return 0;
}