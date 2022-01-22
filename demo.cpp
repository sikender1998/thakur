#include <iostream>
using namespace std;

int firstIndexOfArray(int array[],int n, int x, int currentIndex){
    if(n <= currentIndex){
        return -1;
    }
    else if(array[currentIndex] == x){
        return currentIndex;
    }
    
    return firstIndexOfArray(array,n,x,currentIndex+1);
    
}


int main(){
 int array[] = {9,10,8};
 int n;
 int x = 8;
 cout<<" first index of array is "<<firstIndexOfArray(array,n,x,0);

    return 0;
}


