#include <iostream>
using namespace std;

void merge(int x[],int y[],int arr[]){
    int lenx=sizeof(x)/sizeof(int);
    int leny=sizeof(y)/sizeof(int);
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

void mergeSort(int arr[]){
    int lenarr =sizeof(arr)/sizeof(int);
    if (lenarr<2){
        return ;} 
    int lenx=lenarr/2;
    int x[lenx];
    int y[lenarr-lenx];
    for (int i=0;i<lenx;i++){

        x[i]=arr[i];
    }
     for (int i=lenx;i<lenarr;i++){

        y[i]=arr[i];
    }
    mergeSort(x);
    mergeSort(y);
    merge(x,y,arr); 
}

int main(){


int x[]={5,4,3,2,1};
mergeSort(x);

for (int i=0;i<sizeof(x)/sizeof(int);i++){

    cout<<x[i]<<" ";
}

return 0;

}