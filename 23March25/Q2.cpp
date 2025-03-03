#include <iostream>

using namespace std;

int main(){
    //Find largest of three numbers
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a>b && a>c){
        cout << a << " is the largest number." << endl;
    }else if(b>a && b>c){
        cout << b << " is the largest number." << endl;
    }else{
        cout << c << " is the largest number." << endl;
    }
}