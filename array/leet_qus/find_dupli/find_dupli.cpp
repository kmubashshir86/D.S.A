#include <iostream>
using namespace std;
int main(){
    int arr[11]={1,2,3,7,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    for(int i = 0 ; i < size ; i++){
        ans^=arr[i];
    }
    for(int i = 1 ; i < size ; i++){
        ans^=i;
    }

    cout<<ans<<endl;

    return 0;
}