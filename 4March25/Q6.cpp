#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str){
    int left = 0;
    int right = str.length()-1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main(){
    string str;

    cout<<"Enter a String to check Palindrome :"<<endl;
    getline(cin,str);

    if(isPalindrome(str)){
        cout<<"The String "<<str<<" is a Palindrome"<<endl;
    }
    else{
        cout<<"The String "<<str<<" is NOT a Palindrome"<<endl;
    }
}

