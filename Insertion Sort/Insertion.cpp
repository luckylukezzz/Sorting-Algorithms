#include <iostream>
using namespace std;

//----------insertionsort fuction----------------
void insertionSort(int *arr , int n){

    for(int i=1;i<n;i++){
        int key=arr[i];
        int point =i-1 ;
        while ( point>=0 && arr[point]>key  ){
            arr[point+1]=arr[point];
            point--;

        }
        arr[point+1]=key;

    }
    
    
}


//-------------------------------------------------

int main() {
    int n;
    cin>>n;            // inputting the length of number list
    int arr[n];
    for (int i=0;i<n;i++){
        int val;
        cin>>val;    // inputting the numberlist and store in an array
        arr[i]=val;    
    }

    insertionSort(arr,n);  //calling the insertion sort function
   
   
   for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }      // outputting the sorted array

    return 0;
}