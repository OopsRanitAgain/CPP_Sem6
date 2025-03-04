#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a Number to get its sum of digits :"<<endl;
    cin>>num;

    int sum=0;
    int tempNum = num;

    while(tempNum>0){
        sum+=tempNum%10;
        tempNum/=10;
    }

    cout<<"The Sum of Digits of "<<num<<" is : "<<sum<<endl;
}