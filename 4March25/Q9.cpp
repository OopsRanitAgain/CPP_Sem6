#include <iostream>
using namespace std;

int GCD(int num1,int num2){
    int result = min(num1,num2);

    while(result > 0){
        if(num1 % result == 0 && num2 % result == 0){
            break;
        }
        result--;
    }

    return result;
}

int main(){
    int num1,num2;

    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<GCD(num1,num2)<<endl;
}
