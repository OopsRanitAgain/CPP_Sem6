#include <iostream>

using namespace std;

struct Student{
    string name;
    int roll_no;
    int marks;
};

int main(){
    Student s1 = {"Ranit",28,83};

    cout<<"Name :"<<s1.name<<endl;
    cout<<"Roll No :"<<s1.roll_no<<endl;
    cout<<"Marks :"<<s1.marks<<endl;
    return 0;
}