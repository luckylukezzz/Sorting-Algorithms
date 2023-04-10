#include <iostream>
using namespace std;

void binarySearch(int start, int end, int n , int arr[]){
    int val = (start + end )/2 ;
    if (start == end){
        cout<< "absent";
        return;
    }
    if (arr[val] == n){ 
        cout<<"present"<<endl;
        return;
    }
    
    else if (arr[val]> n) binarySearch(start, val-1 , n , arr);
    else binarySearch(val+1,end , n , arr);
  
}


int main(){
    int arr[]={3,2,5,4,5};
    binarySearch(0,4,3,arr);

    return 0;
}
