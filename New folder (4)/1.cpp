#include<bits/stdc++.h>

using namespace std;

void printArrayReverse(int arr[], int n) {
    if (n == 0) {
        return;  
    } else {
        cout << arr[n - 1] << " ";  
        printArrayReverse(arr, n - 1);
    }
}

int main() {
    int n ;

    cin >> n;

    int arr[n];
    
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    printArrayReverse(arr, n);

    return 0;
}
