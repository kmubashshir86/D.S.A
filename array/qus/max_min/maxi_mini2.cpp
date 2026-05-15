#include <iostream>
#include <algorithm>

using namespace std;

int maxi(int arr[],int n){
    int ans = arr[0];//agar array m 0th element se bada hoga toh woh ye replace ho jayega usse warna agr iske barabar bhi ho toh wohi sbse bada hoga
    for(int i = 1 ; i < n ; i++){
        ans=max(arr[i],ans);
    }
    return ans;
}

int mini(int arr[],int n){
    int ans = arr[0];//agar array m 0th element se chota hoga toh woh ye replace ho jayega usse warna agr iske barabar bhi ho toh wohi sbse chota hoga
    for(int i = 1 ; i < n ; i++){
        ans=min(arr[i],ans);
    }
    return ans;
}
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    for(int i =0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    cout<<"maxi : "<<maxi(arr,size)<<" mini : "<<mini(arr,size)<<endl;

    return 0;
}