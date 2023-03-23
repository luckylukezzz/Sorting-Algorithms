#include <iostream>
#include <ctime>
using namespace std;

void merge(int a[],int l1,int r1,int l2,int r2){
    int temp[r2-l1+1];
    int i=l1;
    int index=0;
    while (l1<=r1 && l2<=r2){
        if (a[l1]<=a[l2]){
            temp[index++]=a[l1++];

        }
        else{
            temp[index++]=a[l2++];

        }
    }
    while(l1<=r1){
        temp[index++]=a[l1++];
    }
    while(l2<=r2){
        temp[index++]=a[l2++];
    }

    for (auto j:temp){
        a[i++]=j;

    }
}

void mergeSort(int a[],int n){
    int len=1;
    while (len<n){
        int i=0;
        while (i<n){
            int l1=i;
            int r1=i +len -1;
            int l2=i+len;
            int r2=i+2*len-1;
            if (l2>= n) break;
            if (r2>=n){
                r2=n-1;

            }
            merge(a,l1,r1,l2,r2);
            i=i+2*len;

        }
        len=2*len;
    }



}
int main(){
        
   int arr[]={70,9,500,1500,99};

   mergeSort(arr,5);   //give the array and length of array

   for (int i=0;i<sizeof(arr)/sizeof(int);i++){

       cout<<arr[i]<<" ";
   }

    return 0;

}