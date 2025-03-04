#include <iostream>

using namespace std;

int main(){
    int num1 = 10;
    int num2 = 20;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout<<"Before swapping : "<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout<<"After swapping : "<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}