#include <ctime> 
#include <iostream>
using namespace std;
int* createRandomArray(int length) {
    int* arr = new int[length];
    srand(time(0)); // Seed the random number generator with the current time
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
    return arr;
}


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


int main(){
    clock_t start;
    clock_t end;
    
    int arrLen[]={5000,7000,9000,15000,20000};
    for (int len:arrLen){
        start = clock();
        int* arr = createRandomArray(len);

        


        // for (int i = 0; i < len; i++) {
        //     cout << arr[i] << " ";
        // }
        //cout << endl;
        insertionSort(arr,len);
        end = clock();

        double timetakenSort = (end - start) / (double)CLOCKS_PER_SEC;
        cout<< "total elements in array: "<< len<<endl;
        cout << "time taken is: " << fixed << timetakenSort<<"ms" << endl<<endl;

    }
    

}