#include <ctime> 
#include <iostream>
using namespace std;


int* createRandomArray(int length) {
    int* arr = new int[length];
    srand(time(0)); 
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


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main(){
    clock_t start;
    clock_t end;
    
    int arrLen[]={5000,7000,9000,15000,20000};
    for (int len:arrLen){
        start = clock();
        int* arr = createRandomArray(len);

        bubbleSort(arr,len);
        // for (int i = 0; i < len; i++) {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        end = clock();

        double timetakenSort = (end - start) / (double)CLOCKS_PER_SEC;
        cout<< "total elements in array: "<< len<<endl;
        cout << "time taken is: " << fixed << timetakenSort*1000<<"ms" << endl<<endl;

    }
    

}