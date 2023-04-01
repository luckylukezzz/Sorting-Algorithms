#include <iostream>
#include<vector>
using namespace std;


int selectionSort(vector<int> &arr) {
    int n = arr.size();
    int min;
    int minID;
    int temp;
    int noSwaps=0;
    for (int i=0;i<=n-2;i++){
        min=arr[i+1];
        minID=i+1;
        for (int j=i+2;j<=n-1;j++){
            if (arr[j]<min){
                min=arr[j];
                minID=j;
            }
                
        }
        if (min<arr[i]){
            temp=arr[i];
            arr[i]=min;
            arr[minID]=temp;
            noSwaps++;
            
            for (int x:arr){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        
    }
    return noSwaps;
}

int main(){
        
   vector<int> arr={70,9,500,1500,99};

   selectionSort(arr);   

   for (int i=0;i<(int) arr.size();i++){

       cout<<arr[i]<<" ";
   }

    return 0;

}