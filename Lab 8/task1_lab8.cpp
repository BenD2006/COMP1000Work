#include <iostream>
#include <string>

using namespace std;


class Book {
    private: 
        string author;
        string title;
        float price;

    public:
        Book(string t, string a, float p): title(t), author(a), price(p) {}

        void displayInfo() {
            cout << "Title: " << title << ", Author: " << author << " , Price: " << price << endl;
        }
};

int main() {
    Book book("The C++ Programming Language", "Bjarne Stroustrup", 39.99);
    book.displayInfo();
    return 0;
}