#include <ctime>
// An iterative implementation of quick sort
#include <bits/stdc++.h>
using namespace std;
  
// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
  
/* This function is same in both iterative and recursive*/
int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
  
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
  
/* A[] --> Array to be sorted, 
l --> Starting index, 
h --> Ending index */
void quickSortIterative(int arr[], int l, int h)
{
    // Create an auxiliary stack
    int stack[h - l + 1];
  
    // initialize top of stack
    int top = -1;
  
    // push initial values of l and h to stack
    stack[++top] = l;
    stack[++top] = h;
  
    // Keep popping from stack while is not empty
    while (top >= 0) {
        // Pop h and l
        h = stack[top--];
        l = stack[top--];
  
        // Set pivot element at its correct position
        // in sorted array
        int p = partition(arr, l, h);
  
        // If there are elements on left side of pivot,
        // then push left side to stack
        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }
  
        // If there are elements on right side of pivot,
        // then push right side to stack
        if (p + 1 < h) {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }
}


int main(){

    clock_t start;
    clock_t end;

    int arrLen[]={5000,7000,9000,15000,20000};
    for (int len:arrLen) {
        start = clock();

        int my_array[len];
        srand(time(0)); 

        for (int i = 0; i < len; i++) {
            my_array[i] = rand() % 100 + 1; 
        }



        quickSortIterative(my_array,0,len-1);
        end = clock();

        double timetakenSort = (end - start) / (double) CLOCKS_PER_SEC;
        cout << "total elements in array: " << len << endl;
        cout << "time taken is: " << fixed << timetakenSort*1000  << "ms" << endl << endl;
    }
}