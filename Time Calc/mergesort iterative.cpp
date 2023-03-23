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
    clock_t start;
    clock_t end;

    int arrLen[]={5000,7000,9000,15000,20000};
    for (int len:arrLen) {
        start = clock();

        int my_array[len];
        srand(time(0)); // Seed the random number generator with the current time

        for (int i = 0; i < len; i++) {
            my_array[i] = rand() % 100 + 1; // Replace 1 and 100 with the range of values you want
        }



        mergeSort(my_array, len);
        end = clock();

        double timetakenSort = (end - start) / (double) CLOCKS_PER_SEC;
        cout << "total elements in array: " << len << endl;
        cout << "time taken is: " << fixed << timetakenSort  << "ms" << endl << endl;
    }
//    int arr[]={70,9,500,1500,99};
//
//    mergeSort(arr,5);
//
//
//
//
//    for (int i=0;i<sizeof(arr)/sizeof(int);i++){
//
//        cout<<arr[i]<<" ";
//    }

    return 0;

}