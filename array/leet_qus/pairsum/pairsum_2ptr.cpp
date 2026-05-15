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

    int i = 0 , j = size-1;
    while(i < j){
        if(arr[i]+arr[j]>sum && i!=j){
            j--;
            break;
        }
        else if(arr[i]+arr[j]==sum && i!=j){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;j++;
            break;
        }
        else if(arr[i]+arr[j]<sum && i!=j){
            i++;
        }
    }

    return 0;
}