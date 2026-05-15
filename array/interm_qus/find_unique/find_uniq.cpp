#include <iostream>
using namespace std;

int main() {
    //element size should be odd and all elements should be repeated twice except one element which is unique
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int var = 0;
    for (int i = 0; i < n; i++) {
        var^=arr[i];
    }
    
    cout << "Unique element: " << var << endl;
    cout << endl;
    
    return 0;
}
