#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
             swap(arr[i], arr[minIndex]);
        }

        // Check if the array is sorted after this iteration
        bool isSorted = true;
        for (int k = 1; k < n; k++) {
            if (arr[k - 1] > arr[k]) {
                isSorted = false;
                break;
            }
        }
        if (isSorted){
            break;
        }

        // Print the array and whether it's sorted in this iteration
         cout << "Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
             cout << arr[k] << " ";
        }
        cout<<"\n";
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

     cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    }
     cout <<  endl;

    selectionSort(arr, n);

     cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    }
     cout <<  endl;

    return 0;
}
