#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cout<<"Enter a String to count number of vowels and Consonant in the String :"<<endl;
    getline(cin,str);

    int vowels = 0;
    int consonants = 0;

    for(char &ch:str){
        ch = tolower(ch);
    }

    for(int i=0;i<str.length();i++){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            vowels++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            consonants++;
        }
    }

    cout<<"The #Vowels in "<<str<<" is : "<<vowels<<endl;
    cout<<"The #Consonants is "<<str<<" is : "<<consonants<<endl;
}