#include <iostream>
using namespace std;

int GCD(int num1,int num2){
    int result = min(num1,num2);

    while(result>0){
        if(num1 % result == 0 && num2 % result == 0){
            break;
        }

        result--;
    }

    return result;
}

int main(){
    cout<<"Enter 1st Number : ";
    int num1;
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    int num2;
    cin>>num2;

    int LCM = num1*num2/GCD(num1,num2);
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<LCM<<endl;
    return 0;
}