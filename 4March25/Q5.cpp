#include <iostream>

using namespace std;

int main(){
    int arr[6] = {11,32,42,23,86,2};
    
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]))/2;i++){
        int temp = arr[i];
        arr[i] = arr[(sizeof(arr)/sizeof(arr[0]))-i-1];
        arr[(sizeof(arr)/sizeof(arr[0]))-i-1] = temp;
    }

    cout<<"The Reversed Array is :"<<endl;
    for(int element:arr){
        cout<<element<<endl;
    }
}