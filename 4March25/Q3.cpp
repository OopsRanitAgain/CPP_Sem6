#include <iostream>

using namespace std;

int main(){
    int arr[6] = {11,32,42,23,86,2};
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout<<"The Max Number in Array is : "<<max<<endl;
    cout<<"The Min Number in Array is : "<<min<<endl;
}