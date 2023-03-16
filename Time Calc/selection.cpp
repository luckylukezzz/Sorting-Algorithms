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


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
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
        cout << "time taken is: " << fixed << timetakenSort*1000<<"ms" << endl<<endl;

    }
    

}