#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}

int main(){
 int n;
 cin>>n;
 fact(n);
 cout<<" factorial of number is "<<fact(n)<<endl;

    return 0;
}


