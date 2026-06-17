#include <iostream>
#include <string>
using namespace std;

class Library_Member
{
    private:
        string name;
        int age;
    public:
        int id;
        string member_type;
    
    void get_data()
    {
        cout << "Input Name: ";
        cin >> name;
        cout << "Input Age: ";
        cin >> age;
        cout << "Input ID: ";
        cin >> id;
        cout << "Input Member Type: ";
        cin >> member_type;
    }

    void show_details()
    {
        cout << "\nBook Holder Name: " << name;
    }
};

class Book
{
    private:
    string book[5];
    int books_issued;

    public:
    Book():books_issued(0) { }

     void issue_book()
    { 
        if (books_issued < 5)
        {
            cout << "\nInput book name: ";
            cin >> book[books_issued];
            books_issued++; 
            cout << "\nBook Issued Successfully";
        }
        else
        cout << "\nCannot issue more books";
    }

    void book_back()
    {
        if (books_issued>=1)
        {
            books_issued--;
            cout << "\nBook Returned Succesfully";
        }
        else 
        cout <<"\nNo books to return";
    }

};

int main(int argc , char* argv[])
{
    Library_Member l;
    l.get_data();
    cout << "\n";
    l.show_details();
    return 0;
}