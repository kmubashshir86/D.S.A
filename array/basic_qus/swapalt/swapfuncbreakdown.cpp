#include <iostream>

using namespace std;

int main(){
    int arr[2]={1,2};
    int temp;
    temp =arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
    return 0;
}