#include <iostream>
using namespace std;

long factorial(long n){
    if (n<2){
        return 1;
    }
    else{
        return n*factorial(n-1);

    }
}


int main(){
    cout<<factorial(5);

    return 0;
}