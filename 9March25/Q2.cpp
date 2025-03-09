#include <iostream>

using namespace std;

struct Book{
    string title;
    string author;
    double price;
};

int main(){
    Book b1 = {"The Alchemist","Paulo Coelho",350.50};

    cout<<"Title :"<<b1.title<<endl;
    cout<<"Author :"<<b1.author<<endl;
    cout<<"Price :"<<b1.price<<endl;
    return 0;
}