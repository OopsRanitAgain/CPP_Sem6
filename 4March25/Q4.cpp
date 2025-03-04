#include <iostream>

using namespace std;

int main(){
    int arr[6] = {11,32,42,23,86,2};
    int sum = 0;
    int avg  = 0;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum += arr[i];
    }

    avg = sum/((sizeof(arr)/sizeof(arr[0])));
    cout<<"The sum of Elements of Array is "<<sum<<endl;
    cout<<"The Average of Elements of Array is "<<avg<<endl;
}