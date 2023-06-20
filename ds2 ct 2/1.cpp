#include <stdio.h>

int findRotations(int arr[], int low, int high) {
    // Array is not rotated
    if (high < low)
        return 0;
    
    // Only one element left
    if (high == low)
        return low;
    
    int mid = low + (high - low) / 2;
    
    // Check if the middle element is the minimum element
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid + 1;
    
    // Check if the middle element is the maximum element
    if (mid > low && arr[mid] < arr[mid - 1])
        return mid;
    
    // Decide which half to search recursively
    if (arr[high] > arr[mid])
        return findRotations(arr, low, mid - 1);
    else
        return findRotations(arr, mid + 1, high);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int rotations = findRotations(arr, 0, n - 1);
    printf("%d\n", rotations);
    
    return 0;
}