#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a Number to print it's Multiplication Table :"<<endl;
    cin>>num;
    cout<<"The Multiplication Table of "<<num<<" is :"<<endl;

    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}