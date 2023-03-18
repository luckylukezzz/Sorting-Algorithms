#include <iostream>
using namespace std;

void merge(int x[],int y[],int arr[],int sx,int sy){
    int lenx=sx;
    int leny=sy;
    int i,j,k=0;

    while (i<lenx && j<leny){
        if (x[i]<y[j]){
            arr[k]=x[i];
            i++;
            k++;

        }
        else{
            arr[k]=y[j];
            j++;
            k++;
        }
    
    }
    while (i<lenx){
       arr[k]=x[i];
            i++;
            k++;
    }
    while (j<leny){
       arr[k]=y[j];
            j++;
            k++;
    }
}

// void mergeSort(int arr[]){
//     int lenarr =sizeof(arr)/sizeof(int);
//     if (lenarr<2){
//         return ;} 
//     int lenx=lenarr/2;
//     int x[lenx];
//     int y[lenarr-lenx];
//     for (int i=0;i<lenx;i++){

//         x[i]=arr[i];
//     }
//      for (int i=lenx;i<lenarr;i++){

//         y[i]=arr[i];
//     }
//     mergeSort(x);
//     mergeSort(y);
//     merge(x,y,arr); 
// }

int main(){


int arr[]={8,9,77,66,99};
int x[]={1,4,5};
int y[]={2,3};
merge(x,y,arr,3,2);

for (int i=0;i<sizeof(arr)/sizeof(int);i++){

    cout<<arr[i]<<" ";
}

return 0;

}