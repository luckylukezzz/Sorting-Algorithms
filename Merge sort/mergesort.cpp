#include <iostream>
using namespace std;

void merge( int arr[],int start,int end,int mid){
    int temp[end-start+1];
    int i=start;
    int j=mid+1;
    int k=0;

    while (i <= mid && j <= end){
        if (arr[i] < arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }

    }
    while (i <= mid){
       temp[k++] = arr[i++];
    }
    while (j <= end){
       temp[k++] = arr[j++];
    }
    i=start;
    for (auto j:temp){
       arr[i++]=j;

    }
}

 void mergeSort(int arr[],int start,int end) {
     if (start < end) {
         int mid = (start + end) / 2;
         mergeSort(arr, start, mid);
         mergeSort(arr, mid + 1, end);
         merge(arr, start, end, mid);
     }
 }

int main(){


    int arr[]={70,9,500,66,99};

    mergeSort(arr,0,4);




    for (int i=0;i<sizeof(arr)/sizeof(int);i++){

        cout<<arr[i]<<" ";
    }

    return 0;

}