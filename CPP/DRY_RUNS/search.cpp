#include<iostream>
#include<string.h>
using namespace std;
                
int bin_search(int arr[], int size , int key){

      int start = 0 ;
      int end = size - 1 ;
      int mid= start + (end - start)/2 ;

      while(start<=end){
            if (arr[mid]==key){
                return mid ;
            }
            else if (arr[mid]>key){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
         mid= start + (end - start)/2 ;
      }   		 	
      return -1;

}

void sorting(int arr[], int size){
    for(int i = 0 ; i < size-1 ; i++){
        int minIndex = i ;
        for(int j = i ; j < size ; j++ ){
                if (arr[minIndex]>arr[j]){
                    minIndex = j ;
                }
        }
        swap(arr[minIndex],arr[i]);
    }
}


int main()
{
    int arr[] = {11,22,33,44,55,66};
    int size = 6;
    sorting(arr,size);

    int key = 11;

    int index = bin_search(arr,size , key);

    if (index == -1 ){
        cout<<"Not found";
    }
    else{
        cout<<"elem is at index : "<<index;
    }




    return 0;
}