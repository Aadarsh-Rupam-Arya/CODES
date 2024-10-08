// #include<iostream>
// #include<string.h>
// #include<fstream>
// using namespace std;
                
// void bubble(int arr[] , int n)
// {
//     for(int i =0 ; i< n ; i++){
//         for(int j = 0 ; j<n - i - 1 ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
// }

// void selection(int arr[] , int n ){
//     for(int i = 0 ; i< n-1 ; i++ ){

//         int min = i ;

//         for(int j = i+1 ; j < n ; j++){
//             if(arr[min]>arr[j]){
//                 min = j ;
//             }
//         }
//         swap(arr[min], arr[i]);
        		 	
//     }
// }

// void ins(int arr[] , int n ){
//     for(int i = 1 ; i < n ; i++){
//         int elem = arr[i] ;
//         int j =  i -1 ;
//         while( j >= 0 && arr[j]> elem){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = elem;
//     }
// }



// void sel(int arr[] , int n ){
//     for(int i = 0 ; i < n -1 ; i++){
//     int min = i ; 
//     for(int j = i+1 ; j < n ; j++){
//         if(arr[min]>arr[j]){
//             min = j ;
//         }
//     }
//     swap(arr[min], arr[i]);
// }

// }



// void inst(int arr[ ] , int n ){
//     for(int i = 1 ; i< n ; i++){
//         int elem = arr[i];
//         int j = i -1 ;
//         while(j >= 0 && arr[j ] > elem){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = elem;
//     }
// }


// void insst(int arr[], int n ){
//     for(int i =1  ; i < n ; i++ ){
//         int elem = arr[i];
//         int j = i-1 ; 
//         while(j >= 0 && arr[j] > elem){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = elem;
//     }
// }


// void sell(int arr[] , int n){
//     for(int i = 0; i < n-1 ; i++){
//         int min = i ; 
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[min] > arr[j]){
//                 min = j ;
//             }
//         }
//         swap(arr[min], arr[i]);
//     }
// }










// int main()
// {
//     int arr[] = {5,2,1,6,4,3};

//     int n  = 6;

//     // bubble(arr,n); 
//     // selection(arr,n);
//     // ins(arr, n);
//     // sel(arr, n);
//     // insst(arr,n);
//     sell(arr,n);

//     for(int i = 0 ; i<n ; i++ ){
//         cout<<arr[i]<<" ";		 	
//     } 	 	
                
                
//     return 0;
// }


// You are using GCC
#include <iostream>
using namespace std;

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr, i, largest);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

void insertIntoMaxHeap(int arr[], int& n, int value) {
    //Type your code here
    n=n+1;
   int index =n;
    arr[index]=value;
    while(index>1){
        int parent = index/2;
        if(arr[parent]<arr[index]){
            swap(arr,parent,index);
            index=parent;
        }
        else 
        {
            return;
        }
    }
    
    
}

void printMaxHeap(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

}

// int countAbove50(int arr[], int n) {
//     //Type your code here
//     for(int i=0;i<n)
    
// }

int main() {
    int arr[100];
    int n = 0;
    int num_elements;

    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        insertIntoMaxHeap(arr, n, value);
    }

    buildMaxHeap(arr, n);

    printMaxHeap(arr, n);
    cout << endl;

    // int count = countAbove50(arr, n);
    // cout << count << endl;
    int count=0;
    for(int i=1;i<=num_elements;i++){
        if(arr[i]>50){
            count++;
        }
    }
    cout<<count;

    return 0;
}