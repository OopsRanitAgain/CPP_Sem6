#include <iostream>
using namespace std;

int factorial(int num){
    if(num==0){
        return 1;
    }
    int fact = 1;

    for(int i=num;i>0;i--){
        fact = fact*i;
    }

    return fact;
}

int main(){
    int num;

    cout<<"Enter a Number to get its Factorial: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
}