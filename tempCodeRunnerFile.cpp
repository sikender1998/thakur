#include <iostream>
using namespace std;

int sumOfArray(int array[],int n){
    if(n ==1){
        return array[0];
    }
    
    return array[0] + sumOfArray(array, n-1);
    
}


int main(){
 int array[] = {1,2,3,4,5};
 int n;
 cout<<"sum of array is "<<sumOfArray(array,n);

    return 0;
}


